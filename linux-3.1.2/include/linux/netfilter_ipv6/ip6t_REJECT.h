#ifndef _IP6T_REJECT_H
#define _IP6T_REJECT_H

#include <linux/types.h>

enum ip6t_reject_with {
	IP6T_ICMP6_NO_ROUTE,
	IP6T_ICMP6_ADM_PROHIBITED,
	IP6T_ICMP6_NOT_NEIGHBOUR,
	IP6T_ICMP6_ADDR_UNREACH,
	IP6T_ICMP6_PORT_UNREACH,
	IP6T_ICMP6_ECHOREPLY,
	IP6T_TCP_RESET
};

struct ip6t_reject_info {
	__u32	with;	/* reject type */
};

#endif /*_IP6T_REJECT_H*/
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:43 PM
Mon, Jul 25, 2016  6:36:15 PM
Mon, Jul 25, 2016  7:49:11 PM
Tue, Jul 26, 2016  2:24:31 PM
