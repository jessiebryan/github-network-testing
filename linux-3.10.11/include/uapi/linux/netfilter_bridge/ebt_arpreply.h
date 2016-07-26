#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:42:25 PDT 2016
Fri Jul 22 15:53:54 PDT 2016
Sun, Jul 24, 2016  3:11:54 PM
Mon, Jul 25, 2016  9:49:36 PM
