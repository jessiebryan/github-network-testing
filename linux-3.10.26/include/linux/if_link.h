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
Tue Jul 19 12:51:55 PDT 2016
Fri Jul 22 16:11:47 PDT 2016
Sun, Jul 24, 2016  5:29:11 PM
Tue, Jul 26, 2016 12:22:01 AM
