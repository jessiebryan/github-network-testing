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
Tue Jul 19 12:51:22 PDT 2016
Fri Jul 22 16:10:42 PDT 2016
Sun, Jul 24, 2016  5:21:19 PM
Tue, Jul 26, 2016 12:13:21 AM
