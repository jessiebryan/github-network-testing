#ifndef _XT_RATE_H
#define _XT_RATE_H

#include <linux/types.h>

/* timings are in milliseconds. */
#define XT_LIMIT_SCALE 10000

struct xt_limit_priv;

/* 1/10,000 sec period => max of 10,000/sec.  Min rate is then 429490
   seconds, or one every 59 hours. */
struct xt_rateinfo {
	__u32 avg;    /* Average secs between packets * scale */
	__u32 burst;  /* Period multiplier for upper limit. */

	/* Used internally by the kernel */
	unsigned long prev; /* moved to xt_limit_priv */
	__u32 credit; /* moved to xt_limit_priv */
	__u32 credit_cap, cost;

	struct xt_limit_priv *master;
};
#endif /*_XT_RATE_H*/
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:25 PDT 2016
Sun, Jul 24, 2016  5:11:58 PM
Tue, Jul 26, 2016 12:03:00 AM
