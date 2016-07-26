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
Tue Jul 19 12:40:17 PDT 2016
Fri Jul 22 15:50:07 PDT 2016
Sun, Jul 24, 2016  2:44:15 PM
Mon, Jul 25, 2016  9:18:21 PM
