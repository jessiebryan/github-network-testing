#ifndef __LINUX_BRIDGE_EBT_NFLOG_H
#define __LINUX_BRIDGE_EBT_NFLOG_H

#include <linux/types.h>

#define EBT_NFLOG_MASK 0x0

#define EBT_NFLOG_PREFIX_SIZE 64
#define EBT_NFLOG_WATCHER "nflog"

#define EBT_NFLOG_DEFAULT_GROUP		0x1
#define EBT_NFLOG_DEFAULT_THRESHOLD	1

struct ebt_nflog_info {
	__u32 len;
	__u16 group;
	__u16 threshold;
	__u16 flags;
	__u16 pad;
	char prefix[EBT_NFLOG_PREFIX_SIZE];
};

#endif				/* __LINUX_BRIDGE_EBT_NFLOG_H */
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:42 PM
Mon, Jul 25, 2016  6:36:14 PM
