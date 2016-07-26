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
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:13 PM
Mon, Jul 25, 2016  8:08:38 PM
Tue, Jul 26, 2016  2:42:45 PM
