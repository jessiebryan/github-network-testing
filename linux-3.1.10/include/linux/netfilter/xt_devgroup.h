#ifndef _XT_DEVGROUP_H
#define _XT_DEVGROUP_H

#include <linux/types.h>

enum xt_devgroup_flags {
	XT_DEVGROUP_MATCH_SRC	= 0x1,
	XT_DEVGROUP_INVERT_SRC	= 0x2,
	XT_DEVGROUP_MATCH_DST	= 0x4,
	XT_DEVGROUP_INVERT_DST	= 0x8,
};

struct xt_devgroup_info {
	__u32	flags;
	__u32	src_group;
	__u32	src_mask;
	__u32	dst_group;
	__u32	dst_mask;
};

#endif /* _XT_DEVGROUP_H */
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:23 PDT 2016
Sun, Jul 24, 2016  1:18:25 PM
Mon, Jul 25, 2016  6:26:17 PM
Mon, Jul 25, 2016  7:39:26 PM
Tue, Jul 26, 2016  2:15:17 PM
