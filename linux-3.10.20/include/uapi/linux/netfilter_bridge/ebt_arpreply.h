#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:48:07 PDT 2016
Fri Jul 22 16:04:34 PDT 2016
Sun, Jul 24, 2016  4:34:56 PM
Mon, Jul 25, 2016 11:21:57 PM
