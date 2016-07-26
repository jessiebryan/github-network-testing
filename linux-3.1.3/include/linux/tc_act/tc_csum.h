#ifndef __LINUX_TC_CSUM_H
#define __LINUX_TC_CSUM_H

#include <linux/types.h>
#include <linux/pkt_cls.h>

#define TCA_ACT_CSUM 16

enum {
	TCA_CSUM_UNSPEC,
	TCA_CSUM_PARMS,
	TCA_CSUM_TM,
	__TCA_CSUM_MAX
};
#define TCA_CSUM_MAX (__TCA_CSUM_MAX - 1)

enum {
	TCA_CSUM_UPDATE_FLAG_IPV4HDR = 1,
	TCA_CSUM_UPDATE_FLAG_ICMP    = 2,
	TCA_CSUM_UPDATE_FLAG_IGMP    = 4,
	TCA_CSUM_UPDATE_FLAG_TCP     = 8,
	TCA_CSUM_UPDATE_FLAG_UDP     = 16,
	TCA_CSUM_UPDATE_FLAG_UDPLITE = 32
};

struct tc_csum {
	tc_gen;

	__u32 update_flags;
};

#endif /* __LINUX_TC_CSUM_H */
Tue Jul 19 12:35:24 PDT 2016
Fri Jul 22 15:40:39 PDT 2016
Sun, Jul 24, 2016  1:35:14 PM
Mon, Jul 25, 2016  7:59:12 PM
Tue, Jul 26, 2016  2:33:55 PM
