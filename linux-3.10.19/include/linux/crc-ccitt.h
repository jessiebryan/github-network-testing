#ifndef _LINUX_CRC_CCITT_H
#define _LINUX_CRC_CCITT_H

#include <linux/types.h>

extern u16 const crc_ccitt_table[256];

extern u16 crc_ccitt(u16 crc, const u8 *buffer, size_t len);

static inline u16 crc_ccitt_byte(u16 crc, const u8 c)
{
	return (crc >> 8) ^ crc_ccitt_table[(crc ^ c) & 0xff];
}

#endif /* _LINUX_CRC_CCITT_H */
Tue Jul 19 12:47:23 PDT 2016
Fri Jul 22 16:03:10 PDT 2016
Sun, Jul 24, 2016  4:24:07 PM
Mon, Jul 25, 2016 11:09:55 PM
