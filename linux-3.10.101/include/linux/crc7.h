#ifndef _LINUX_CRC7_H
#define _LINUX_CRC7_H
#include <linux/types.h>

extern const u8 crc7_syndrome_table[256];

static inline u8 crc7_byte(u8 crc, u8 data)
{
	return crc7_syndrome_table[(crc << 1) ^ data];
}

extern u8 crc7(u8 crc, const u8 *buffer, size_t len);

#endif
Tue Jul 19 12:40:50 PDT 2016
Fri Jul 22 15:51:09 PDT 2016
Sun, Jul 24, 2016  2:51:54 PM
Mon, Jul 25, 2016  9:27:01 PM
