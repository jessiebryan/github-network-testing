#ifndef _NET_EVENT_H
#define _NET_EVENT_H

/*
 *	Generic netevent notifiers
 *
 *	Authors:
 *      Tom Tucker              <tom@opengridcomputing.com>
 *      Steve Wise              <swise@opengridcomputing.com>
 *
 * 	Changes:
 */

struct dst_entry;
struct neighbour;

struct netevent_redirect {
	struct dst_entry *old;
	struct dst_entry *new;
	struct neighbour *neigh;
	const void *daddr;
};

enum netevent_notif_type {
	NETEVENT_NEIGH_UPDATE = 1, /* arg is struct neighbour ptr */
	NETEVENT_REDIRECT,	   /* arg is struct netevent_redirect ptr */
};

extern int register_netevent_notifier(struct notifier_block *nb);
extern int unregister_netevent_notifier(struct notifier_block *nb);
extern int call_netevent_notifiers(unsigned long val, void *v);

#endif
Tue Jul 19 12:50:40 PDT 2016
Fri Jul 22 16:09:22 PDT 2016
Sun, Jul 24, 2016  5:11:32 PM
Tue, Jul 26, 2016 12:02:32 AM
