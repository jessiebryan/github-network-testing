#ifndef _LINUX_BITREV_H
#define _LINUX_BITREV_H

#include <linux/types.h>

extern u8 const byte_rev_table[256];

static inline u8 bitrev8(u8 byte)
{
	return byte_rev_table[byte];
}

extern u16 bitrev16(u16 in);
extern u32 bitrev32(u32 in);

#endif /* _LINUX_BITREV_H */
Tue Jul 19 12:39:32 PDT 2016
Fri Jul 22 15:48:38 PDT 2016
Sun, Jul 24, 2016  2:33:25 PM
Mon, Jul 25, 2016  9:06:17 PM
