#ifndef __NET_TC_NAT_H
#define __NET_TC_NAT_H

#include <linux/types.h>
#include <net/act_api.h>

struct tcf_nat {
	struct tcf_common common;

	__be32 old_addr;
	__be32 new_addr;
	__be32 mask;
	u32 flags;
};

static inline struct tcf_nat *to_tcf_nat(struct tcf_common *pc)
{
	return container_of(pc, struct tcf_nat, common);
}

#endif /* __NET_TC_NAT_H */
Tue Jul 19 12:34:36 PDT 2016
Fri Jul 22 15:39:33 PDT 2016
Sun, Jul 24, 2016  1:27:18 PM
Mon, Jul 25, 2016  6:36:56 PM
Mon, Jul 25, 2016  7:49:51 PM
Tue, Jul 26, 2016  2:25:09 PM
