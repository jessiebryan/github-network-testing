#ifndef _XT_NFLOG_TARGET
#define _XT_NFLOG_TARGET

#include <linux/types.h>

#define XT_NFLOG_DEFAULT_GROUP		0x1
#define XT_NFLOG_DEFAULT_THRESHOLD	0

#define XT_NFLOG_MASK			0x0

struct xt_nflog_info {
	__u32	len;
	__u16	group;
	__u16	threshold;
	__u16	flags;
	__u16	pad;
	char		prefix[64];
};

#endif /* _XT_NFLOG_TARGET */
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:11 PM
Mon, Jul 25, 2016  8:08:35 PM
Tue, Jul 26, 2016  2:42:43 PM
