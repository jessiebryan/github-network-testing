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
Tue Jul 19 12:53:57 PDT 2016
Fri Jul 22 16:15:45 PDT 2016
Sun, Jul 24, 2016  5:58:32 PM
Tue, Jul 26, 2016 12:54:23 AM
