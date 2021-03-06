#ifndef _XT_CONNLIMIT_H
#define _XT_CONNLIMIT_H

#include <linux/types.h>

struct xt_connlimit_data;

enum {
	XT_CONNLIMIT_INVERT = 1 << 0,
	XT_CONNLIMIT_DADDR  = 1 << 1,
};

struct xt_connlimit_info {
	union {
		union nf_inet_addr mask;
#ifndef __KERNEL__
		union {
			__be32 v4_mask;
			__be32 v6_mask[4];
		};
#endif
	};
	unsigned int limit;
	union {
		/* revision 0 */
		unsigned int inverse;

		/* revision 1 */
		__u32 flags;
	};

	/* Used internally by the kernel */
	struct xt_connlimit_data *data __attribute__((aligned(8)));
};

#endif /* _XT_CONNLIMIT_H */
Tue Jul 19 12:38:20 PDT 2016
Fri Jul 22 15:46:12 PDT 2016
Sun, Jul 24, 2016  2:16:08 PM
Mon, Jul 25, 2016  8:47:01 PM
