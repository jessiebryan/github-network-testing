#ifndef _XT_MULTIPORT_H
#define _XT_MULTIPORT_H

#include <linux/types.h>

enum xt_multiport_flags {
	XT_MULTIPORT_SOURCE,
	XT_MULTIPORT_DESTINATION,
	XT_MULTIPORT_EITHER
};

#define XT_MULTI_PORTS	15

/* Must fit inside union xt_matchinfo: 16 bytes */
struct xt_multiport {
	__u8 flags;				/* Type of comparison */
	__u8 count;				/* Number of ports */
	__u16 ports[XT_MULTI_PORTS];	/* Ports */
};

struct xt_multiport_v1 {
	__u8 flags;				/* Type of comparison */
	__u8 count;				/* Number of ports */
	__u16 ports[XT_MULTI_PORTS];	/* Ports */
	__u8 pflags[XT_MULTI_PORTS];	/* Port flags */
	__u8 invert;			/* Invert flag */
};

#endif /*_XT_MULTIPORT_H*/
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:41 PM
Mon, Jul 25, 2016  6:36:12 PM
Mon, Jul 25, 2016  7:49:08 PM
Tue, Jul 26, 2016  2:24:28 PM
