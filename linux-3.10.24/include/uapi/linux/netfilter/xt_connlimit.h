#ifndef _XT_CONNLIMIT_H
#define _XT_CONNLIMIT_H

#include <linux/types.h>
#include <linux/netfilter.h>

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
	/* revision 1 */
	__u32 flags;

	/* Used internally by the kernel */
	struct xt_connlimit_data *data __attribute__((aligned(8)));
};

#endif /* _XT_CONNLIMIT_H */
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:25 PDT 2016
Sun, Jul 24, 2016  5:11:57 PM
Tue, Jul 26, 2016 12:02:59 AM
