#ifndef __IP_SET_BITMAP_H
#define __IP_SET_BITMAP_H

#include <uapi/linux/netfilter/ipset/ip_set_bitmap.h>

#define IPSET_BITMAP_MAX_RANGE	0x0000FFFF

enum {
	IPSET_ADD_FAILED = 1,
	IPSET_ADD_STORE_PLAIN_TIMEOUT,
	IPSET_ADD_START_STORED_TIMEOUT,
};

/* Common functions */

static inline u32
range_to_mask(u32 from, u32 to, u8 *bits)
{
	u32 mask = 0xFFFFFFFE;

	*bits = 32;
	while (--(*bits) > 0 && mask && (to & mask) != from)
		mask <<= 1;

	return mask;
}

#endif /* __IP_SET_BITMAP_H */
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:05 PDT 2016
Sun, Jul 24, 2016  5:38:48 PM
Tue, Jul 26, 2016 12:32:37 AM
