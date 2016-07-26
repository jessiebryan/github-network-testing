#ifndef __LINUX_BRIDGE_EBT_PKTTYPE_H
#define __LINUX_BRIDGE_EBT_PKTTYPE_H

#include <linux/types.h>

struct ebt_pkttype_info {
	__u8 pkt_type;
	__u8 invert;
};
#define EBT_PKTTYPE_MATCH "pkttype"

#endif
Tue Jul 19 12:50:03 PDT 2016
Fri Jul 22 16:08:13 PDT 2016
Sun, Jul 24, 2016  5:02:43 PM
Mon, Jul 25, 2016 11:52:47 PM
