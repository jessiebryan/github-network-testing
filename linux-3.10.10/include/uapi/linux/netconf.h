#ifndef _UAPI_LINUX_NETCONF_H_
#define _UAPI_LINUX_NETCONF_H_

#include <linux/types.h>
#include <linux/netlink.h>

struct netconfmsg {
	__u8	ncm_family;
};

enum {
	NETCONFA_UNSPEC,
	NETCONFA_IFINDEX,
	NETCONFA_FORWARDING,
	NETCONFA_RP_FILTER,
	NETCONFA_MC_FORWARDING,
	__NETCONFA_MAX
};
#define NETCONFA_MAX	(__NETCONFA_MAX - 1)

#define NETCONFA_IFINDEX_ALL		-1
#define NETCONFA_IFINDEX_DEFAULT	-2

#endif /* _UAPI_LINUX_NETCONF_H_ */
Tue Jul 19 12:39:38 PDT 2016
Fri Jul 22 15:48:51 PDT 2016
Sun, Jul 24, 2016  2:35:00 PM
Mon, Jul 25, 2016  9:08:03 PM
