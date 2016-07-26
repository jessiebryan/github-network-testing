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
Tue Jul 19 12:46:45 PDT 2016
Fri Jul 22 16:01:59 PDT 2016
Sun, Jul 24, 2016  4:14:49 PM
Mon, Jul 25, 2016 10:59:37 PM
