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
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:12 PM
Mon, Jul 25, 2016  8:08:37 PM
Tue, Jul 26, 2016  2:42:44 PM
