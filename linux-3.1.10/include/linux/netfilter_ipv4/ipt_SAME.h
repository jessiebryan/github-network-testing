#ifndef _IPT_SAME_H
#define _IPT_SAME_H

#include <linux/types.h>

#define IPT_SAME_MAX_RANGE	10

#define IPT_SAME_NODST		0x01

struct ipt_same_info {
	unsigned char info;
	__u32 rangesize;
	__u32 ipnum;
	__u32 *iparray;

	/* hangs off end. */
	struct nf_nat_range range[IPT_SAME_MAX_RANGE];
};

#endif /*_IPT_SAME_H*/
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:23 PDT 2016
Sun, Jul 24, 2016  1:18:27 PM
Mon, Jul 25, 2016  6:26:20 PM
Mon, Jul 25, 2016  7:39:29 PM
