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
Tue Jul 19 12:33:41 PDT 2016
Fri Jul 22 15:38:23 PDT 2016
Sun, Jul 24, 2016  1:18:27 PM
Mon, Jul 25, 2016  6:26:20 PM
Mon, Jul 25, 2016  7:39:29 PM
Tue, Jul 26, 2016  2:15:20 PM
