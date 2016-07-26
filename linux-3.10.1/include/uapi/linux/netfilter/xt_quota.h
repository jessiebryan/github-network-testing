#ifndef _XT_QUOTA_H
#define _XT_QUOTA_H

#include <linux/types.h>

enum xt_quota_flags {
	XT_QUOTA_INVERT		= 0x1,
};
#define XT_QUOTA_MASK		0x1

struct xt_quota_priv;

struct xt_quota_info {
	__u32 flags;
	__u32 pad;
	__aligned_u64 quota;

	/* Used internally by the kernel */
	struct xt_quota_priv	*master;
};

#endif /* _XT_QUOTA_H */
Tue Jul 19 12:39:01 PDT 2016
Fri Jul 22 15:47:33 PDT 2016
Sun, Jul 24, 2016  2:25:51 PM
Mon, Jul 25, 2016  8:57:50 PM
