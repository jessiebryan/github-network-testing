/* Header file for iptables ipt_CHECKSUM target
 *
 * (C) 2002 by Harald Welte <laforge@gnumonks.org>
 * (C) 2010 Red Hat Inc
 * Author: Michael S. Tsirkin <mst@redhat.com>
 *
 * This software is distributed under GNU GPL v2, 1991
*/
#ifndef _XT_CHECKSUM_TARGET_H
#define _XT_CHECKSUM_TARGET_H

#include <linux/types.h>

#define XT_CHECKSUM_OP_FILL	0x01	/* fill in checksum in IP header */

struct xt_CHECKSUM_info {
	__u8 operation;	/* bitset of operations */
};

#endif /* _XT_CHECKSUM_TARGET_H */
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:23 PDT 2016
Sun, Jul 24, 2016  1:18:24 PM
Mon, Jul 25, 2016  6:26:17 PM
Mon, Jul 25, 2016  7:39:25 PM
Tue, Jul 26, 2016  2:15:16 PM
