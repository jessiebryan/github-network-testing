#ifndef _NF_CONNTRACK_IRC_H
#define _NF_CONNTRACK_IRC_H

#ifdef __KERNEL__

#define IRC_PORT	6667

extern unsigned int (*nf_nat_irc_hook)(struct sk_buff *skb,
				       enum ip_conntrack_info ctinfo,
				       unsigned int protoff,
				       unsigned int matchoff,
				       unsigned int matchlen,
				       struct nf_conntrack_expect *exp);

#endif /* __KERNEL__ */
#endif /* _NF_CONNTRACK_IRC_H */
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:49:58 PDT 2016
Sun, Jul 24, 2016  2:43:09 PM
Mon, Jul 25, 2016  9:17:07 PM
