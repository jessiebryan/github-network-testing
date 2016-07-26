/* IP tables module for matching the value of the TTL
 * (C) 2000 by Harald Welte <laforge@gnumonks.org> */

#ifndef _IPT_TTL_H
#define _IPT_TTL_H

#include <linux/types.h>

enum {
	IPT_TTL_EQ = 0,		/* equals */
	IPT_TTL_NE,		/* not equals */
	IPT_TTL_LT,		/* less than */
	IPT_TTL_GT,		/* greater than */
};


struct ipt_ttl_info {
	__u8	mode;
	__u8	ttl;
};


#endif
Tue Jul 19 12:44:21 PDT 2016
Fri Jul 22 15:57:28 PDT 2016
Sun, Jul 24, 2016  3:39:36 PM
Mon, Jul 25, 2016 10:20:25 PM
