#ifndef _XT_SECMARK_H_target
#define _XT_SECMARK_H_target

#include <linux/types.h>

/*
 * This is intended for use by various security subsystems (but not
 * at the same time).
 *
 * 'mode' refers to the specific security subsystem which the
 * packets are being marked for.
 */
#define SECMARK_MODE_SEL	0x01		/* SELinux */
#define SECMARK_SECCTX_MAX	256

struct xt_secmark_target_info {
	__u8 mode;
	__u32 secid;
	char secctx[SECMARK_SECCTX_MAX];
};

#endif /*_XT_SECMARK_H_target */
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:41 PM
Mon, Jul 25, 2016  6:36:13 PM
Mon, Jul 25, 2016  7:49:08 PM
Tue, Jul 26, 2016  2:24:28 PM
