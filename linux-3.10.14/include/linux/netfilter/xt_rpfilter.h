#ifndef _XT_RPATH_H
#define _XT_RPATH_H

#include <linux/types.h>

enum {
	XT_RPFILTER_LOOSE = 1 << 0,
	XT_RPFILTER_VALID_MARK = 1 << 1,
	XT_RPFILTER_ACCEPT_LOCAL = 1 << 2,
	XT_RPFILTER_INVERT = 1 << 3,
#ifdef __KERNEL__
	XT_RPFILTER_OPTION_MASK = XT_RPFILTER_LOOSE |
				  XT_RPFILTER_VALID_MARK |
				  XT_RPFILTER_ACCEPT_LOCAL |
				  XT_RPFILTER_INVERT,
#endif
};

struct xt_rpfilter_info {
	__u8 flags;
};

#endif
Tue Jul 19 12:44:16 PDT 2016
Fri Jul 22 15:57:19 PDT 2016
Sun, Jul 24, 2016  3:38:27 PM
Mon, Jul 25, 2016 10:19:11 PM
