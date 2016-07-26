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
Tue Jul 19 12:53:56 PDT 2016
Fri Jul 22 16:15:42 PDT 2016
Sun, Jul 24, 2016  5:58:10 PM
Tue, Jul 26, 2016 12:54:00 AM
