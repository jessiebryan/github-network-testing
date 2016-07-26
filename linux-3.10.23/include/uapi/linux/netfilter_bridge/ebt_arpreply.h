#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:50:03 PDT 2016
Fri Jul 22 16:08:13 PDT 2016
Sun, Jul 24, 2016  5:02:43 PM
Mon, Jul 25, 2016 11:52:46 PM
