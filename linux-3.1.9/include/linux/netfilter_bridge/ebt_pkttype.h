#ifndef __LINUX_BRIDGE_EBT_PKTTYPE_H
#define __LINUX_BRIDGE_EBT_PKTTYPE_H

#include <linux/types.h>

struct ebt_pkttype_info {
	__u8 pkt_type;
	__u8 invert;
};
#define EBT_PKTTYPE_MATCH "pkttype"

#endif
Tue Jul 19 12:38:20 PDT 2016
Fri Jul 22 15:46:12 PDT 2016
Sun, Jul 24, 2016  2:16:10 PM
Mon, Jul 25, 2016  8:47:04 PM
