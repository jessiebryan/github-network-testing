#ifndef _XT_CONNBYTES_H
#define _XT_CONNBYTES_H

#include <linux/types.h>

enum xt_connbytes_what {
	XT_CONNBYTES_PKTS,
	XT_CONNBYTES_BYTES,
	XT_CONNBYTES_AVGPKT,
};

enum xt_connbytes_direction {
	XT_CONNBYTES_DIR_ORIGINAL,
	XT_CONNBYTES_DIR_REPLY,
	XT_CONNBYTES_DIR_BOTH,
};

struct xt_connbytes_info {
	struct {
		__aligned_u64 from;	/* count to be matched */
		__aligned_u64 to;	/* count to be matched */
	} count;
	__u8 what;		/* ipt_connbytes_what */
	__u8 direction;	/* ipt_connbytes_direction */
};
#endif
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:25 PDT 2016
Sun, Jul 24, 2016  5:11:57 PM
Tue, Jul 26, 2016 12:02:59 AM
