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
Tue Jul 19 12:49:24 PDT 2016
Fri Jul 22 16:06:56 PDT 2016
Sun, Jul 24, 2016  4:53:00 PM
Mon, Jul 25, 2016 11:42:06 PM
