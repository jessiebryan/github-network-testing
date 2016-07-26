#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H

struct ebt_arpreply_info {
	unsigned char mac[ETH_ALEN];
	int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"

#endif
Tue Jul 19 12:53:57 PDT 2016
Fri Jul 22 16:15:45 PDT 2016
Sun, Jul 24, 2016  5:58:33 PM
Tue, Jul 26, 2016 12:54:26 AM
