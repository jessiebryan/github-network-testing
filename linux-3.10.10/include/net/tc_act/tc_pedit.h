#ifndef __NET_TC_PED_H
#define __NET_TC_PED_H

#include <net/act_api.h>

struct tcf_pedit {
	struct tcf_common	common;
	unsigned char		tcfp_nkeys;
	unsigned char		tcfp_flags;
	struct tc_pedit_key	*tcfp_keys;
};
#define to_pedit(pc) \
	container_of(pc, struct tcf_pedit, common)

#endif /* __NET_TC_PED_H */
Tue Jul 19 12:39:37 PDT 2016
Fri Jul 22 15:48:48 PDT 2016
Sun, Jul 24, 2016  2:34:40 PM
Mon, Jul 25, 2016  9:07:41 PM
