#ifndef _NET_NFNL_QUEUE_H_
#define _NET_NFNL_QUEUE_H_

#include <linux/netfilter/nf_conntrack_common.h>

struct nf_conn;

#ifdef CONFIG_NETFILTER_NETLINK_QUEUE_CT
struct nf_conn *nfqnl_ct_get(struct sk_buff *entskb, size_t *size,
			     enum ip_conntrack_info *ctinfo);
struct nf_conn *nfqnl_ct_parse(const struct sk_buff *skb,
			       const struct nlattr *attr,
			       enum ip_conntrack_info *ctinfo);
int nfqnl_ct_put(struct sk_buff *skb, struct nf_conn *ct,
		 enum ip_conntrack_info ctinfo);
void nfqnl_ct_seq_adjust(struct sk_buff *skb, struct nf_conn *ct,
			 enum ip_conntrack_info ctinfo, int diff);
#else
inline struct nf_conn *
nfqnl_ct_get(struct sk_buff *entskb, size_t *size, enum ip_conntrack_info *ctinfo)
{
	return NULL;
}

inline struct nf_conn *nfqnl_ct_parse(const struct sk_buff *skb,
				      const struct nlattr *attr,
				      enum ip_conntrack_info *ctinfo)
{
	return NULL;
}

inline int
nfqnl_ct_put(struct sk_buff *skb, struct nf_conn *ct, enum ip_conntrack_info ctinfo)
{
	return 0;
}

inline void nfqnl_ct_seq_adjust(struct sk_buff *skb, struct nf_conn *ct,
				enum ip_conntrack_info ctinfo, int diff)
{
}
#endif /* NF_CONNTRACK */
#endif
Tue Jul 19 12:40:16 PDT 2016
Fri Jul 22 15:50:04 PDT 2016
Sun, Jul 24, 2016  2:43:50 PM
Mon, Jul 25, 2016  9:17:52 PM
