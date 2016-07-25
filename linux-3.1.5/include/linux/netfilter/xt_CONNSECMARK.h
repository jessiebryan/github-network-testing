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
Tue Jul 19 12:36:31 PDT 2016
Fri Jul 22 15:42:52 PDT 2016
Sun, Jul 24, 2016  1:51:25 PM
