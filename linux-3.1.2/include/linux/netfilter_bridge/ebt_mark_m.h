#ifndef __LINUX_BRIDGE_EBT_MARK_M_H
#define __LINUX_BRIDGE_EBT_MARK_M_H

#include <linux/types.h>

#define EBT_MARK_AND 0x01
#define EBT_MARK_OR 0x02
#define EBT_MARK_MASK (EBT_MARK_AND | EBT_MARK_OR)
struct ebt_mark_m_info {
	unsigned long mark, mask;
	__u8 invert;
	__u8 bitmask;
};
#define EBT_MARK_MATCH "mark_m"

#endif
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:42 PM
Mon, Jul 25, 2016  6:36:14 PM
Mon, Jul 25, 2016  7:49:09 PM
Tue, Jul 26, 2016  2:24:30 PM
