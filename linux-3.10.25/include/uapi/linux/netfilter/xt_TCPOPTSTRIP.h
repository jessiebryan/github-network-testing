#ifndef _XT_TCPOPTSTRIP_H
#define _XT_TCPOPTSTRIP_H

#include <linux/types.h>

#define tcpoptstrip_set_bit(bmap, idx) \
	(bmap[(idx) >> 5] |= 1U << (idx & 31))
#define tcpoptstrip_test_bit(bmap, idx) \
	(((1U << (idx & 31)) & bmap[(idx) >> 5]) != 0)

struct xt_tcpoptstrip_target_info {
	__u32 strip_bmap[8];
};

#endif /* _XT_TCPOPTSTRIP_H */
Tue Jul 19 12:51:22 PDT 2016
Fri Jul 22 16:10:41 PDT 2016
Sun, Jul 24, 2016  5:21:18 PM
Tue, Jul 26, 2016 12:13:19 AM
