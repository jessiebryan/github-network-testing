#ifndef _XT_CT_H
#define _XT_CT_H

#include <linux/types.h>

#define XT_CT_NOTRACK	0x1

struct xt_ct_target_info {
	__u16 flags;
	__u16 zone;
	__u32 ct_events;
	__u32 exp_events;
	char helper[16];

	/* Used internally by the kernel */
	struct nf_conn	*ct __attribute__((aligned(8)));
};

#endif /* _XT_CT_H */
Tue Jul 19 12:37:05 PDT 2016
Fri Jul 22 15:43:57 PDT 2016
Sun, Jul 24, 2016  1:59:39 PM
Mon, Jul 25, 2016  8:28:04 PM
