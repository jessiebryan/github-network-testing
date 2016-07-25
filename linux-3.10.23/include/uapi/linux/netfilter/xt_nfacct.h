#ifndef _XT_NFACCT_MATCH_H
#define _XT_NFACCT_MATCH_H

#include <linux/netfilter/nfnetlink_acct.h>

struct nf_acct;

struct xt_nfacct_match_info {
	char		name[NFACCT_NAME_MAX];
	struct nf_acct	*nfacct;
};

#endif /* _XT_NFACCT_MATCH_H */
Tue Jul 19 12:50:03 PDT 2016
Fri Jul 22 16:08:12 PDT 2016
Sun, Jul 24, 2016  5:02:41 PM
