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
Tue Jul 19 12:53:18 PDT 2016
Fri Jul 22 16:14:30 PDT 2016
Sun, Jul 24, 2016  5:49:14 PM
Tue, Jul 26, 2016 12:44:06 AM
