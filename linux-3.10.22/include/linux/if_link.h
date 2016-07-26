#ifndef _LINUX_IF_LINK_H
#define _LINUX_IF_LINK_H

#include <uapi/linux/if_link.h>


/* We don't want this structure exposed to user space */
struct ifla_vf_info {
	__u32 vf;
	__u8 mac[32];
	__u32 vlan;
	__u32 qos;
	__u32 tx_rate;
	__u32 spoofchk;
};
#endif /* _LINUX_IF_LINK_H */
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:49 PDT 2016
Sun, Jul 24, 2016  4:51:57 PM
Mon, Jul 25, 2016 11:40:57 PM
