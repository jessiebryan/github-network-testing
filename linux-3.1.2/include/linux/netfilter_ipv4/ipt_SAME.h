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
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:43 PM
Mon, Jul 25, 2016  6:36:14 PM
Mon, Jul 25, 2016  7:49:10 PM
Tue, Jul 26, 2016  2:24:30 PM
