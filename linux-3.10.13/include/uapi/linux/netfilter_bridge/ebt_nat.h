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
Tue Jul 19 12:43:42 PDT 2016
Fri Jul 22 15:56:15 PDT 2016
Sun, Jul 24, 2016  3:30:20 PM
Mon, Jul 25, 2016 10:10:09 PM
