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
Tue Jul 19 12:50:41 PDT 2016
Fri Jul 22 16:09:23 PDT 2016
Sun, Jul 24, 2016  5:11:36 PM
Tue, Jul 26, 2016 12:02:36 AM
