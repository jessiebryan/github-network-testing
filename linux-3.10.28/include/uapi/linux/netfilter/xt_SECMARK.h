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
Tue Jul 19 12:53:18 PDT 2016
Fri Jul 22 16:14:30 PDT 2016
Sun, Jul 24, 2016  5:49:14 PM
Tue, Jul 26, 2016 12:44:06 AM
