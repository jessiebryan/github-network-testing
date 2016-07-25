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
Tue Jul 19 12:37:06 PDT 2016
Fri Jul 22 15:43:58 PDT 2016
Sun, Jul 24, 2016  1:59:42 PM
