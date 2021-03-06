#ifndef _XT_RATEEST_MATCH_H
#define _XT_RATEEST_MATCH_H

#include <linux/types.h>

enum xt_rateest_match_flags {
	XT_RATEEST_MATCH_INVERT	= 1<<0,
	XT_RATEEST_MATCH_ABS	= 1<<1,
	XT_RATEEST_MATCH_REL	= 1<<2,
	XT_RATEEST_MATCH_DELTA	= 1<<3,
	XT_RATEEST_MATCH_BPS	= 1<<4,
	XT_RATEEST_MATCH_PPS	= 1<<5,
};

enum xt_rateest_match_mode {
	XT_RATEEST_MATCH_NONE,
	XT_RATEEST_MATCH_EQ,
	XT_RATEEST_MATCH_LT,
	XT_RATEEST_MATCH_GT,
};

struct xt_rateest_match_info {
	char			name1[IFNAMSIZ];
	char			name2[IFNAMSIZ];
	__u16		flags;
	__u16		mode;
	__u32		bps1;
	__u32		pps1;
	__u32		bps2;
	__u32		pps2;

	/* Used internally by the kernel */
	struct xt_rateest	*est1 __attribute__((aligned(8)));
	struct xt_rateest	*est2 __attribute__((aligned(8)));
};

#endif /* _XT_RATEEST_MATCH_H */
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:26 PDT 2016
Sun, Jul 24, 2016  5:11:58 PM
Tue, Jul 26, 2016 12:03:01 AM
