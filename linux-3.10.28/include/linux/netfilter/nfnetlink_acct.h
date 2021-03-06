#ifndef _NFNL_ACCT_H_
#define _NFNL_ACCT_H_

#include <uapi/linux/netfilter/nfnetlink_acct.h>


struct nf_acct;

extern struct nf_acct *nfnl_acct_find_get(const char *filter_name);
extern void nfnl_acct_put(struct nf_acct *acct);
extern void nfnl_acct_update(const struct sk_buff *skb, struct nf_acct *nfacct);

#endif /* _NFNL_ACCT_H */
Tue Jul 19 12:53:14 PDT 2016
Fri Jul 22 16:14:21 PDT 2016
Sun, Jul 24, 2016  5:48:07 PM
Tue, Jul 26, 2016 12:42:52 AM
