/* IPv4-specific defines for netfilter. 
 * (C)1998 Rusty Russell -- This code is GPL.
 */
#ifndef __LINUX_IP_NETFILTER_H
#define __LINUX_IP_NETFILTER_H

#include <uapi/linux/netfilter_ipv4.h>

extern int ip_route_me_harder(struct sk_buff *skb, unsigned addr_type);
extern __sum16 nf_ip_checksum(struct sk_buff *skb, unsigned int hook,
				   unsigned int dataoff, u_int8_t protocol);
#endif /*__LINUX_IP_NETFILTER_H*/
Tue Jul 19 12:44:16 PDT 2016
Fri Jul 22 15:57:19 PDT 2016
Sun, Jul 24, 2016  3:38:27 PM
Mon, Jul 25, 2016 10:19:11 PM
