#ifndef _XT_MARK_H
#define _XT_MARK_H

#include <linux/types.h>

struct xt_mark_tginfo2 {
	__u32 mark, mask;
};

struct xt_mark_mtinfo1 {
	__u32 mark, mask;
	__u8 invert;
};

#endif /*_XT_MARK_H*/
Tue Jul 19 12:48:07 PDT 2016
Fri Jul 22 16:04:34 PDT 2016
Sun, Jul 24, 2016  4:34:54 PM
Mon, Jul 25, 2016 11:21:55 PM
