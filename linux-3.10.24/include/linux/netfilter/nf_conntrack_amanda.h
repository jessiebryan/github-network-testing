#ifndef _NF_CONNTRACK_AMANDA_H
#define _NF_CONNTRACK_AMANDA_H
/* AMANDA tracking. */

extern unsigned int (*nf_nat_amanda_hook)(struct sk_buff *skb,
					  enum ip_conntrack_info ctinfo,
					  unsigned int protoff,
					  unsigned int matchoff,
					  unsigned int matchlen,
					  struct nf_conntrack_expect *exp);
#endif /* _NF_CONNTRACK_AMANDA_H */
Tue Jul 19 12:50:38 PDT 2016
Fri Jul 22 16:09:17 PDT 2016
Sun, Jul 24, 2016  5:10:52 PM
Tue, Jul 26, 2016 12:01:48 AM
