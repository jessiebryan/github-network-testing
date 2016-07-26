#ifndef _NF_NAT_RULE_H
#define _NF_NAT_RULE_H
#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_nat.h>
#include <linux/netfilter_ipv4/ip_tables.h>

extern int nf_nat_rule_init(void) __init;
extern void nf_nat_rule_cleanup(void);
extern int nf_nat_rule_find(struct sk_buff *skb,
			    unsigned int hooknum,
			    const struct net_device *in,
			    const struct net_device *out,
			    struct nf_conn *ct);

#endif /* _NF_NAT_RULE_H */
Tue Jul 19 12:34:36 PDT 2016
Fri Jul 22 15:39:32 PDT 2016
Sun, Jul 24, 2016  1:27:15 PM
Mon, Jul 25, 2016  6:36:54 PM
Mon, Jul 25, 2016  7:49:48 PM
