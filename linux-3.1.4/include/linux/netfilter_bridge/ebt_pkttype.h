#ifndef __LINUX_BRIDGE_EBT_PKTTYPE_H
#define __LINUX_BRIDGE_EBT_PKTTYPE_H

#include <linux/types.h>

struct ebt_pkttype_info {
	__u8 pkt_type;
	__u8 invert;
};
#define EBT_PKTTYPE_MATCH "pkttype"

#endif
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:12 PM
Mon, Jul 25, 2016  8:08:37 PM
Tue, Jul 26, 2016  2:42:44 PM
