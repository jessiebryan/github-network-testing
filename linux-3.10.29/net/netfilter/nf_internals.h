#ifndef _NF_INTERNALS_H
#define _NF_INTERNALS_H

#include <linux/list.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>

#ifdef CONFIG_NETFILTER_DEBUG
#define NFDEBUG(format, args...)  printk(KERN_DEBUG format , ## args)
#else
#define NFDEBUG(format, args...)
#endif


/* core.c */
extern unsigned int nf_iterate(struct list_head *head,
				struct sk_buff *skb,
				unsigned int hook,
				const struct net_device *indev,
				const struct net_device *outdev,
				struct nf_hook_ops **elemp,
				int (*okfn)(struct sk_buff *),
				int hook_thresh);

/* nf_queue.c */
extern int nf_queue(struct sk_buff *skb,
		    struct nf_hook_ops *elem,
		    u_int8_t pf, unsigned int hook,
		    struct net_device *indev,
		    struct net_device *outdev,
		    int (*okfn)(struct sk_buff *),
		    unsigned int queuenum);
extern int __init netfilter_queue_init(void);

/* nf_log.c */
extern int __init netfilter_log_init(void);

#endif
Tue Jul 19 12:53:58 PDT 2016
Fri Jul 22 16:15:48 PDT 2016
Sun, Jul 24, 2016  5:58:52 PM
Tue, Jul 26, 2016 12:54:47 AM
