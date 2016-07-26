#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:40:17 PDT 2016
Fri Jul 22 15:50:07 PDT 2016
Sun, Jul 24, 2016  2:44:16 PM
Mon, Jul 25, 2016  9:18:22 PM
