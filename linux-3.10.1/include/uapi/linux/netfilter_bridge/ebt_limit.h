#ifndef __LINUX_BRIDGE_EBT_LIMIT_H
#define __LINUX_BRIDGE_EBT_LIMIT_H

#include <linux/types.h>

#define EBT_LIMIT_MATCH "limit"

/* timings are in milliseconds. */
#define EBT_LIMIT_SCALE 10000

/* 1/10,000 sec period => max of 10,000/sec.  Min rate is then 429490
   seconds, or one every 59 hours. */

struct ebt_limit_info {
	__u32 avg;    /* Average secs between packets * scale */
	__u32 burst;  /* Period multiplier for upper limit. */

	/* Used internally by the kernel */
	unsigned long prev;
	__u32 credit;
	__u32 credit_cap, cost;
};

#endif
Tue Jul 19 12:39:01 PDT 2016
Fri Jul 22 15:47:33 PDT 2016
Sun, Jul 24, 2016  2:25:52 PM
Mon, Jul 25, 2016  8:57:52 PM
