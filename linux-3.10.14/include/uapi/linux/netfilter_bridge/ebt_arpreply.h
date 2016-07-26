#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:44:21 PDT 2016
Fri Jul 22 15:57:28 PDT 2016
Sun, Jul 24, 2016  3:39:36 PM
Mon, Jul 25, 2016 10:20:24 PM
