/* iptables module for using NFQUEUE mechanism
 *
 * (C) 2005 Harald Welte <laforge@netfilter.org>
 *
 * This software is distributed under GNU GPL v2, 1991
 * 
*/
#ifndef _XT_NFQ_TARGET_H
#define _XT_NFQ_TARGET_H

#include <linux/types.h>

/* target info */
struct xt_NFQ_info {
	__u16 queuenum;
};

struct xt_NFQ_info_v1 {
	__u16 queuenum;
	__u16 queues_total;
};

struct xt_NFQ_info_v2 {
	__u16 queuenum;
	__u16 queues_total;
	__u16 bypass;
};

#endif /* _XT_NFQ_TARGET_H */
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:41 PM
Mon, Jul 25, 2016  6:36:12 PM
Mon, Jul 25, 2016  7:49:08 PM
Tue, Jul 26, 2016  2:24:28 PM
