#ifndef _XT_OWNER_MATCH_H
#define _XT_OWNER_MATCH_H

#include <linux/types.h>

enum {
	XT_OWNER_UID    = 1 << 0,
	XT_OWNER_GID    = 1 << 1,
	XT_OWNER_SOCKET = 1 << 2,
};

struct xt_owner_match_info {
	__u32 uid_min, uid_max;
	__u32 gid_min, gid_max;
	__u8 match, invert;
};

#endif /* _XT_OWNER_MATCH_H */
Tue Jul 19 12:48:07 PDT 2016
Fri Jul 22 16:04:34 PDT 2016
Sun, Jul 24, 2016  4:34:55 PM
Mon, Jul 25, 2016 11:21:55 PM
