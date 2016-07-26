#ifndef _NF_NAT_CORE_H
#define _NF_NAT_CORE_H
#include <linux/list.h>
#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_nat.h>

/* This header used to share core functionality between the standalone
   NAT module, and the compatibility layer's use of NAT for masquerading. */

extern unsigned int nf_nat_packet(struct nf_conn *ct,
				  enum ip_conntrack_info ctinfo,
				  unsigned int hooknum,
				  struct sk_buff *skb);

extern int nf_xfrm_me_harder(struct sk_buff *skb, unsigned int family);

static inline int nf_nat_initialized(struct nf_conn *ct,
				     enum nf_nat_manip_type manip)
{
	if (manip == NF_NAT_MANIP_SRC)
		return ct->status & IPS_SRC_NAT_DONE;
	else
		return ct->status & IPS_DST_NAT_DONE;
}

struct nlattr;

extern int
(*nfnetlink_parse_nat_setup_hook)(struct nf_conn *ct,
				  enum nf_nat_manip_type manip,
				  const struct nlattr *attr);

#endif /* _NF_NAT_CORE_H */
Tue Jul 19 12:43:40 PDT 2016
Fri Jul 22 15:56:12 PDT 2016
Sun, Jul 24, 2016  3:29:54 PM
Mon, Jul 25, 2016 10:09:40 PM
