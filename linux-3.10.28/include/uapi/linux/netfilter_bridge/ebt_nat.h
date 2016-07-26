#ifndef __LINUX_BRIDGE_EBT_NAT_H
#define __LINUX_BRIDGE_EBT_NAT_H

#define NAT_ARP_BIT  (0x00000010)
struct ebt_nat_info {
	unsigned char mac[ETH_ALEN];
	/* EBT_ACCEPT, EBT_DROP, EBT_CONTINUE or EBT_RETURN */
	int target;
};
#define EBT_SNAT_TARGET "snat"
#define EBT_DNAT_TARGET "dnat"

#endif
Tue Jul 19 12:53:18 PDT 2016
Fri Jul 22 16:14:30 PDT 2016
Sun, Jul 24, 2016  5:49:15 PM
Tue, Jul 26, 2016 12:44:07 AM
