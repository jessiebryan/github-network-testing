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
Tue Jul 19 12:46:51 PDT 2016
Fri Jul 22 16:02:11 PDT 2016
Sun, Jul 24, 2016  4:16:26 PM
Mon, Jul 25, 2016 11:01:26 PM
