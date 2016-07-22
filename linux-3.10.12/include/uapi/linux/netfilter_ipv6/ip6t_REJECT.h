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
Tue Jul 19 12:43:04 PDT 2016
Fri Jul 22 15:55:05 PDT 2016
