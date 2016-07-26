#ifndef _XT_NFACCT_MATCH_H
#define _XT_NFACCT_MATCH_H

#include <linux/netfilter/nfnetlink_acct.h>

struct nf_acct;

struct xt_nfacct_match_info {
	char		name[NFACCT_NAME_MAX];
	struct nf_acct	*nfacct;
};

#endif /* _XT_NFACCT_MATCH_H */
Tue Jul 19 12:45:00 PDT 2016
Fri Jul 22 15:58:38 PDT 2016
Sun, Jul 24, 2016  3:48:47 PM
Mon, Jul 25, 2016 10:30:40 PM
