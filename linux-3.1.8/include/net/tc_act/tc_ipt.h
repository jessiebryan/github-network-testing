#ifndef __NET_TC_IPT_H
#define __NET_TC_IPT_H

#include <net/act_api.h>

struct xt_entry_target;

struct tcf_ipt {
	struct tcf_common	common;
	u32			tcfi_hook;
	char			*tcfi_tname;
	struct xt_entry_target	*tcfi_t;
};
#define to_ipt(pc) \
	container_of(pc, struct tcf_ipt, common)

#endif /* __NET_TC_IPT_H */
Tue Jul 19 12:37:47 PDT 2016
Fri Jul 22 15:45:10 PDT 2016
Sun, Jul 24, 2016  2:08:31 PM
Mon, Jul 25, 2016  8:38:35 PM
