#ifndef _XT_CT_H
#define _XT_CT_H

#include <linux/types.h>

enum {
	XT_CT_NOTRACK		= 1 << 0,
	XT_CT_NOTRACK_ALIAS	= 1 << 1,
	XT_CT_MASK		= XT_CT_NOTRACK | XT_CT_NOTRACK_ALIAS,
};

struct xt_ct_target_info {
	__u16 flags;
	__u16 zone;
	__u32 ct_events;
	__u32 exp_events;
	char helper[16];

	/* Used internally by the kernel */
	struct nf_conn	*ct __attribute__((aligned(8)));
};

struct xt_ct_target_info_v1 {
	__u16 flags;
	__u16 zone;
	__u32 ct_events;
	__u32 exp_events;
	char helper[16];
	char timeout[32];

	/* Used internally by the kernel */
	struct nf_conn	*ct __attribute__((aligned(8)));
};

#endif /* _XT_CT_H */
Tue Jul 19 12:40:17 PDT 2016
Fri Jul 22 15:50:07 PDT 2016
Sun, Jul 24, 2016  2:44:14 PM
Mon, Jul 25, 2016  9:18:20 PM
