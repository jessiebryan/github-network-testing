#ifndef _XT_SOCKET_H
#define _XT_SOCKET_H

#include <linux/types.h>

enum {
	XT_SOCKET_TRANSPARENT = 1 << 0,
};

struct xt_socket_mtinfo1 {
	__u8 flags;
};

#endif /* _XT_SOCKET_H */
Tue Jul 19 12:47:29 PDT 2016
Fri Jul 22 16:03:22 PDT 2016
Sun, Jul 24, 2016  4:25:41 PM
Mon, Jul 25, 2016 11:11:40 PM
