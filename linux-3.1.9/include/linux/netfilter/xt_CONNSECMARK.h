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
Tue Jul 19 12:38:20 PDT 2016
Fri Jul 22 15:46:12 PDT 2016
Sun, Jul 24, 2016  2:16:08 PM
Mon, Jul 25, 2016  8:47:01 PM
