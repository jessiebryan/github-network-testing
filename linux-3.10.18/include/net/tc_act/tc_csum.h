#ifndef __NET_TC_CSUM_H
#define __NET_TC_CSUM_H

#include <linux/types.h>
#include <net/act_api.h>

struct tcf_csum {
	struct tcf_common common;

	u32 update_flags;
};
#define to_tcf_csum(pc) \
	container_of(pc,struct tcf_csum,common)

#endif /* __NET_TC_CSUM_H */
Tue Jul 19 12:46:50 PDT 2016
Fri Jul 22 16:02:09 PDT 2016
Sun, Jul 24, 2016  4:16:04 PM
Mon, Jul 25, 2016 11:01:01 PM
