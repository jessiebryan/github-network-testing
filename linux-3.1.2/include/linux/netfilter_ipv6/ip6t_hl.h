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
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:43 PM
Mon, Jul 25, 2016  6:36:15 PM
