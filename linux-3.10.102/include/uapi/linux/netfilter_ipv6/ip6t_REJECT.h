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
Tue Jul 19 12:41:36 PDT 2016
Fri Jul 22 15:52:42 PDT 2016
Sun, Jul 24, 2016  3:02:43 PM
Mon, Jul 25, 2016  9:39:14 PM
