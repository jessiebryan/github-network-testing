#ifndef __IP_SET_BITMAP_H
#define __IP_SET_BITMAP_H

/* Bitmap type specific error codes */
enum {
	/* The element is out of the range of the set */
	IPSET_ERR_BITMAP_RANGE = IPSET_ERR_TYPE_SPECIFIC,
	/* The range exceeds the size limit of the set type */
	IPSET_ERR_BITMAP_RANGE_SIZE,
};

#ifdef __KERNEL__
#define IPSET_BITMAP_MAX_RANGE	0x0000FFFF

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

#endif /* __KERNEL__ */

#endif /* __IP_SET_BITMAP_H */
Tue Jul 19 12:36:31 PDT 2016
Fri Jul 22 15:42:52 PDT 2016
Sun, Jul 24, 2016  1:51:23 PM
Mon, Jul 25, 2016  8:18:16 PM
