#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:49:25 PDT 2016
Fri Jul 22 16:06:59 PDT 2016
Sun, Jul 24, 2016  4:53:22 PM
Mon, Jul 25, 2016 11:42:31 PM
