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
Tue Jul 19 12:51:20 PDT 2016
Fri Jul 22 16:10:38 PDT 2016
Sun, Jul 24, 2016  5:20:55 PM
Tue, Jul 26, 2016 12:12:54 AM
