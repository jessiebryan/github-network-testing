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
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:13 PM
Mon, Jul 25, 2016  8:08:37 PM
Tue, Jul 26, 2016  2:42:45 PM
