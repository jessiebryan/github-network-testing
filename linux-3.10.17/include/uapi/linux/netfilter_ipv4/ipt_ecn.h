#ifndef _IPT_ECN_H
#define _IPT_ECN_H

#include <linux/netfilter/xt_ecn.h>
#define ipt_ecn_info xt_ecn_info

enum {
	IPT_ECN_IP_MASK       = XT_ECN_IP_MASK,
	IPT_ECN_OP_MATCH_IP   = XT_ECN_OP_MATCH_IP,
	IPT_ECN_OP_MATCH_ECE  = XT_ECN_OP_MATCH_ECE,
	IPT_ECN_OP_MATCH_CWR  = XT_ECN_OP_MATCH_CWR,
	IPT_ECN_OP_MATCH_MASK = XT_ECN_OP_MATCH_MASK,
};

#endif /* IPT_ECN_H */
Tue Jul 19 12:46:12 PDT 2016
Fri Jul 22 16:00:59 PDT 2016
Sun, Jul 24, 2016  4:07:15 PM
Mon, Jul 25, 2016 10:51:12 PM
