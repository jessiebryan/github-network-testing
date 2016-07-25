#ifndef _NF_DEFRAG_IPV6_H
#define _NF_DEFRAG_IPV6_H

extern void nf_defrag_ipv6_enable(void);

extern int nf_ct_frag6_init(void);
extern void nf_ct_frag6_cleanup(void);
extern struct sk_buff *nf_ct_frag6_gather(struct sk_buff *skb, u32 user);
extern void nf_ct_frag6_consume_orig(struct sk_buff *skb);

struct inet_frags_ctl;

#endif /* _NF_DEFRAG_IPV6_H */
Tue Jul 19 12:50:40 PDT 2016
Fri Jul 22 16:09:22 PDT 2016
Sun, Jul 24, 2016  5:11:33 PM
