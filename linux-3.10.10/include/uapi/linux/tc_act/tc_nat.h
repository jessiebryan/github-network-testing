#ifndef __LINUX_TC_NAT_H
#define __LINUX_TC_NAT_H

#include <linux/pkt_cls.h>
#include <linux/types.h>

#define TCA_ACT_NAT 9

enum {
	TCA_NAT_UNSPEC,
	TCA_NAT_PARMS,
	TCA_NAT_TM,
	__TCA_NAT_MAX
};
#define TCA_NAT_MAX (__TCA_NAT_MAX - 1)

#define TCA_NAT_FLAG_EGRESS 1

struct tc_nat {
	tc_gen;
	__be32 old_addr;
	__be32 new_addr;
	__be32 mask;
	__u32 flags;
};

#endif
Tue Jul 19 12:39:39 PDT 2016
Fri Jul 22 15:48:52 PDT 2016
Sun, Jul 24, 2016  2:35:09 PM
Mon, Jul 25, 2016  9:08:13 PM
