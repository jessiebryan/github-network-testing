#ifndef _XT_CONNSECMARK_H_target
#define _XT_CONNSECMARK_H_target

#include <linux/types.h>

enum {
	CONNSECMARK_SAVE = 1,
	CONNSECMARK_RESTORE,
};

struct xt_connsecmark_target_info {
	__u8 mode;
};

#endif /*_XT_CONNSECMARK_H_target */
Tue Jul 19 12:51:22 PDT 2016
Fri Jul 22 16:10:41 PDT 2016
Sun, Jul 24, 2016  5:21:16 PM
Tue, Jul 26, 2016 12:13:17 AM
