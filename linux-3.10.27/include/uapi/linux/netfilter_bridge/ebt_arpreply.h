#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:52:39 PDT 2016
Fri Jul 22 16:13:14 PDT 2016
Sun, Jul 24, 2016  5:39:55 PM
Tue, Jul 26, 2016 12:33:52 AM
