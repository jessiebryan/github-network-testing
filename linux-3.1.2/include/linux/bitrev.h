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
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:24 PDT 2016
Sun, Jul 24, 2016  1:26:09 PM
Mon, Jul 25, 2016  6:35:35 PM
Mon, Jul 25, 2016  7:48:31 PM
Tue, Jul 26, 2016  2:23:53 PM
