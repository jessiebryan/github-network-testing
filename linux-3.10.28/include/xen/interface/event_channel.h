/******************************************************************************
 * event_channel.h
 *
 * Event channels between domains.
 *
 * Copyright (c) 2003-2004, K A Fraser.
 */

#ifndef __XEN_PUBLIC_EVENT_CHANNEL_H__
#define __XEN_PUBLIC_EVENT_CHANNEL_H__

#include <xen/interface/xen.h>

typedef uint32_t evtchn_port_t;
DEFINE_GUEST_HANDLE(evtchn_port_t);

/*
 * EVTCHNOP_alloc_unbound: Allocate a port in domain <dom> and mark as
 * accepting interdomain bindings from domain <remote_dom>. A fresh port
 * is allocated in <dom> and returned as <port>.
 * NOTES:
 *  1. If the caller is unprivileged then <dom> must be DOMID_SELF.
 *  2. <rdom> may be DOMID_SELF, allowing loopback connections.
 */
#define EVTCHNOP_alloc_unbound	  6
struct evtchn_alloc_unbound {
	/* IN parameters */
	domid_t dom, remote_dom;
	/* OUT parameters */
	evtchn_port_t port;
};

/*
 * EVTCHNOP_bind_interdomain: Construct an interdomain event channel between
 * the calling domain and <remote_dom>. <remote_dom,remote_port> must identify
 * a port that is unbound and marked as accepting bindings from the calling
 * domain. A fresh port is allocated in the calling domain and returned as
 * <local_port>.
 * NOTES:
 *  2. <remote_dom> may be DOMID_SELF, allowing loopback connections.
 */
#define EVTCHNOP_bind_interdomain 0
struct evtchn_bind_interdomain {
	/* IN parameters. */
	domid_t remote_dom;
	evtchn_port_t remote_port;
	/* OUT parameters. */
	evtchn_port_t local_port;
};

/*
 * EVTCHNOP_bind_virq: Bind a local event channel to VIRQ <irq> on specified
 * vcpu.
 * NOTES:
 *  1. A virtual IRQ may be bound to at most one event channel per vcpu.
 *  2. The allocated event channel is bound to the specified vcpu. The binding
 *     may not be changed.
 */
#define EVTCHNOP_bind_virq	  1
struct evtchn_bind_virq {
	/* IN parameters. */
	uint32_t virq;
	uint32_t vcpu;
	/* OUT parameters. */
	evtchn_port_t port;
};

/*
 * EVTCHNOP_bind_pirq: Bind a local event channel to PIRQ <irq>.
 * NOTES:
 *  1. A physical IRQ may be bound to at most one event channel per domain.
 *  2. Only a sufficiently-privileged domain may bind to a physical IRQ.
 */
#define EVTCHNOP_bind_pirq	  2
struct evtchn_bind_pirq {
	/* IN parameters. */
	uint32_t pirq;
#define BIND_PIRQ__WILL_SHARE 1
	uint32_t flags; /* BIND_PIRQ__* */
	/* OUT parameters. */
	evtchn_port_t port;
};

/*
 * EVTCHNOP_bind_ipi: Bind a local event channel to receive events.
 * NOTES:
 *  1. The allocated event channel is bound to the specified vcpu. The binding
 *     may not be changed.
 */
#define EVTCHNOP_bind_ipi	  7
struct evtchn_bind_ipi {
	uint32_t vcpu;
	/* OUT parameters. */
	evtchn_port_t port;
};

/*
 * EVTCHNOP_close: Close a local event channel <port>. If the channel is
 * interdomain then the remote end is placed in the unbound state
 * (EVTCHNSTAT_unbound), awaiting a new connection.
 */
#define EVTCHNOP_close		  3
struct evtchn_close {
	/* IN parameters. */
	evtchn_port_t port;
};

/*
 * EVTCHNOP_send: Send an event to the remote end of the channel whose local
 * endpoint is <port>.
 */
#define EVTCHNOP_send		  4
struct evtchn_send {
	/* IN parameters. */
	evtchn_port_t port;
};

/*
 * EVTCHNOP_status: Get the current status of the communication channel which
 * has an endpoint at <dom, port>.
 * NOTES:
 *  1. <dom> may be specified as DOMID_SELF.
 *  2. Only a sufficiently-privileged domain may obtain the status of an event
 *     channel for which <dom> is not DOMID_SELF.
 */
#define EVTCHNOP_status		  5
struct evtchn_status {
	/* IN parameters */
	domid_t  dom;
	evtchn_port_t port;
	/* OUT parameters */
#define EVTCHNSTAT_closed	0  /* Channel is not in use.		     */
#define EVTCHNSTAT_unbound	1  /* Channel is waiting interdom connection.*/
#define EVTCHNSTAT_interdomain	2  /* Channel is connected to remote domain. */
#define EVTCHNSTAT_pirq		3  /* Channel is bound to a phys IRQ line.   */
#define EVTCHNSTAT_virq		4  /* Channel is bound to a virtual IRQ line */
#define EVTCHNSTAT_ipi		5  /* Channel is bound to a virtual IPI line */
	uint32_t status;
	uint32_t vcpu;		   /* VCPU to which this channel is bound.   */
	union {
		struct {
			domid_t dom;
		} unbound; /* EVTCHNSTAT_unbound */
		struct {
			domid_t dom;
			evtchn_port_t port;
		} interdomain; /* EVTCHNSTAT_interdomain */
		uint32_t pirq;	    /* EVTCHNSTAT_pirq	      */
		uint32_t virq;	    /* EVTCHNSTAT_virq	      */
	} u;
};

/*
 * EVTCHNOP_bind_vcpu: Specify which vcpu a channel should notify when an
 * event is pending.
 * NOTES:
 *  1. IPI- and VIRQ-bound channels always notify the vcpu that initialised
 *     the binding. This binding cannot be changed.
 *  2. All other channels notify vcpu0 by default. This default is set when
 *     the channel is allocated (a port that is freed and subsequently reused
 *     has its binding reset to vcpu0).
 */
#define EVTCHNOP_bind_vcpu	  8
struct evtchn_bind_vcpu {
	/* IN parameters. */
	evtchn_port_t port;
	uint32_t vcpu;
};

/*
 * EVTCHNOP_unmask: Unmask the specified local event-channel port and deliver
 * a notification to the appropriate VCPU if an event is pending.
 */
#define EVTCHNOP_unmask		  9
struct evtchn_unmask {
	/* IN parameters. */
	evtchn_port_t port;
};

/*
 * EVTCHNOP_reset: Close all event channels associated with specified domain.
 * NOTES:
 *  1. <dom> may be specified as DOMID_SELF.
 *  2. Only a sufficiently-privileged domain may specify other than DOMID_SELF.
 */
#define EVTCHNOP_reset		 10
struct evtchn_reset {
	/* IN parameters. */
	domid_t dom;
};
typedef struct evtchn_reset evtchn_reset_t;

struct evtchn_op {
	uint32_t cmd; /* EVTCHNOP_* */
	union {
		struct evtchn_alloc_unbound    alloc_unbound;
		struct evtchn_bind_interdomain bind_interdomain;
		struct evtchn_bind_virq	       bind_virq;
		struct evtchn_bind_pirq	       bind_pirq;
		struct evtchn_bind_ipi	       bind_ipi;
		struct evtchn_close	       close;
		struct evtchn_send	       send;
		struct evtchn_status	       status;
		struct evtchn_bind_vcpu	       bind_vcpu;
		struct evtchn_unmask	       unmask;
	} u;
};
DEFINE_GUEST_HANDLE_STRUCT(evtchn_op);

#endif /* __XEN_PUBLIC_EVENT_CHANNEL_H__ */
Tue Jul 19 12:53:19 PDT 2016
Fri Jul 22 16:14:32 PDT 2016
Sun, Jul 24, 2016  5:49:27 PM
Tue, Jul 26, 2016 12:44:20 AM
