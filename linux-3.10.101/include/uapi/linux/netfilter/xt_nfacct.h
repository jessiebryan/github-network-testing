#ifndef _XT_NFACCT_MATCH_H
#define _XT_NFACCT_MATCH_H

#include <linux/netfilter/nfnetlink_acct.h>

struct nf_acct;

struct xt_nfacct_match_info {
	char		name[NFACCT_NAME_MAX];
	struct nf_acct	*nfacct;
};

#endif /* _XT_NFACCT_MATCH_H */
Tue Jul 19 12:40:56 PDT 2016
Fri Jul 22 15:51:22 PDT 2016
Sun, Jul 24, 2016  2:53:27 PM
Mon, Jul 25, 2016  9:28:46 PM
