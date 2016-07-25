#ifndef _NFNL_ACCT_H_
#define _NFNL_ACCT_H_

#include <uapi/linux/netfilter/nfnetlink_acct.h>


struct nf_acct;

extern struct nf_acct *nfnl_acct_find_get(const char *filter_name);
extern void nfnl_acct_put(struct nf_acct *acct);
extern void nfnl_acct_update(const struct sk_buff *skb, struct nf_acct *nfacct);

#endif /* _NFNL_ACCT_H */
Tue Jul 19 12:38:57 PDT 2016
Fri Jul 22 15:47:25 PDT 2016
Sun, Jul 24, 2016  2:24:45 PM
