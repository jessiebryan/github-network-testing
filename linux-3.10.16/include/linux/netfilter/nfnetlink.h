#ifndef _NFNETLINK_H
#define _NFNETLINK_H


#include <linux/netlink.h>
#include <linux/capability.h>
#include <net/netlink.h>
#include <uapi/linux/netfilter/nfnetlink.h>

struct nfnl_callback {
	int (*call)(struct sock *nl, struct sk_buff *skb, 
		    const struct nlmsghdr *nlh,
		    const struct nlattr * const cda[]);
	int (*call_rcu)(struct sock *nl, struct sk_buff *skb, 
		    const struct nlmsghdr *nlh,
		    const struct nlattr * const cda[]);
	const struct nla_policy *policy;	/* netlink attribute policy */
	const u_int16_t attr_count;		/* number of nlattr's */
};

struct nfnetlink_subsystem {
	const char *name;
	__u8 subsys_id;			/* nfnetlink subsystem ID */
	__u8 cb_count;			/* number of callbacks */
	const struct nfnl_callback *cb;	/* callback for individual types */
};

extern int nfnetlink_subsys_register(const struct nfnetlink_subsystem *n);
extern int nfnetlink_subsys_unregister(const struct nfnetlink_subsystem *n);

extern int nfnetlink_has_listeners(struct net *net, unsigned int group);
extern struct sk_buff *nfnetlink_alloc_skb(struct net *net, unsigned int size,
					   u32 dst_portid, gfp_t gfp_mask);
extern int nfnetlink_send(struct sk_buff *skb, struct net *net, u32 portid,
			  unsigned int group, int echo, gfp_t flags);
extern int nfnetlink_set_err(struct net *net, u32 portid, u32 group, int error);
extern int nfnetlink_unicast(struct sk_buff *skb, struct net *net,
			     u32 portid, int flags);

extern void nfnl_lock(__u8 subsys_id);
extern void nfnl_unlock(__u8 subsys_id);

#define MODULE_ALIAS_NFNL_SUBSYS(subsys) \
	MODULE_ALIAS("nfnetlink-subsys-" __stringify(subsys))

#endif	/* _NFNETLINK_H */
Tue Jul 19 12:45:32 PDT 2016
Fri Jul 22 15:59:41 PDT 2016
Sun, Jul 24, 2016  3:56:55 PM
Mon, Jul 25, 2016 10:39:41 PM
