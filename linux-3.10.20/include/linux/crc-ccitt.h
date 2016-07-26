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
Tue Jul 19 12:48:01 PDT 2016
Fri Jul 22 16:04:22 PDT 2016
Sun, Jul 24, 2016  4:33:21 PM
Mon, Jul 25, 2016 11:20:12 PM
