/* ip6tables module for matching the Hop Limit value
 * Maciej Soltysiak <solt@dns.toxicfilms.tv>
 * Based on HW's ttl module */

#ifndef _IP6T_HL_H
#define _IP6T_HL_H

#include <linux/types.h>

enum {
	IP6T_HL_EQ = 0,		/* equals */
	IP6T_HL_NE,		/* not equals */
	IP6T_HL_LT,		/* less than */
	IP6T_HL_GT,		/* greater than */
};


struct ip6t_hl_info {
	__u8	mode;
	__u8	hop_limit;
};


#endif
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:26 PDT 2016
Sun, Jul 24, 2016  5:12:00 PM
Tue, Jul 26, 2016 12:03:03 AM
