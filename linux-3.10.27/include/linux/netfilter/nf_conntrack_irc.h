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
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:05 PDT 2016
Sun, Jul 24, 2016  5:38:48 PM
Tue, Jul 26, 2016 12:32:38 AM
