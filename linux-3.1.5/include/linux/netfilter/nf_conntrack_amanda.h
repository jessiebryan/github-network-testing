#ifndef _NF_CONNTRACK_AMANDA_H
#define _NF_CONNTRACK_AMANDA_H
/* AMANDA tracking. */

extern unsigned int (*nf_nat_amanda_hook)(struct sk_buff *skb,
					  enum ip_conntrack_info ctinfo,
					  unsigned int matchoff,
					  unsigned int matchlen,
					  struct nf_conntrack_expect *exp);
#endif /* _NF_CONNTRACK_AMANDA_H */
Tue Jul 19 12:36:31 PDT 2016
Fri Jul 22 15:42:52 PDT 2016
Sun, Jul 24, 2016  1:51:24 PM
Mon, Jul 25, 2016  8:18:16 PM
