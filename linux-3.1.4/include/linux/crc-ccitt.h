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
Tue Jul 19 12:35:56 PDT 2016
Fri Jul 22 15:41:40 PDT 2016
Sun, Jul 24, 2016  1:42:43 PM
Mon, Jul 25, 2016  8:08:03 PM
Tue, Jul 26, 2016  2:42:12 PM
