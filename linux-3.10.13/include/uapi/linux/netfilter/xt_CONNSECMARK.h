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
Tue Jul 19 12:43:42 PDT 2016
Fri Jul 22 15:56:15 PDT 2016
Sun, Jul 24, 2016  3:30:18 PM
Mon, Jul 25, 2016 10:10:06 PM
