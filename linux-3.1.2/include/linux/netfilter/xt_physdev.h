#ifndef _XT_PHYSDEV_H
#define _XT_PHYSDEV_H

#include <linux/types.h>

#ifdef __KERNEL__
#include <linux/if.h>
#endif

#define XT_PHYSDEV_OP_IN		0x01
#define XT_PHYSDEV_OP_OUT		0x02
#define XT_PHYSDEV_OP_BRIDGED		0x04
#define XT_PHYSDEV_OP_ISIN		0x08
#define XT_PHYSDEV_OP_ISOUT		0x10
#define XT_PHYSDEV_OP_MASK		(0x20 - 1)

struct xt_physdev_info {
	char physindev[IFNAMSIZ];
	char in_mask[IFNAMSIZ];
	char physoutdev[IFNAMSIZ];
	char out_mask[IFNAMSIZ];
	__u8 invert;
	__u8 bitmask;
};

#endif /*_XT_PHYSDEV_H*/
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:41 PM
Mon, Jul 25, 2016  6:36:12 PM
Mon, Jul 25, 2016  7:49:08 PM
Tue, Jul 26, 2016  2:24:28 PM
