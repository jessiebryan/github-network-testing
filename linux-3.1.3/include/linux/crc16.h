/*
 *	crc16.h - CRC-16 routine
 *
 * Implements the standard CRC-16:
 *   Width 16
 *   Poly  0x8005 (x^16 + x^15 + x^2 + 1)
 *   Init  0
 *
 * Copyright (c) 2005 Ben Gardner <bgardner@wabtec.com>
 *
 * This source code is licensed under the GNU General Public License,
 * Version 2. See the file COPYING for more details.
 */

#ifndef __CRC16_H
#define __CRC16_H

#include <linux/types.h>

extern u16 const crc16_table[256];

extern u16 crc16(u16 crc, const u8 *buffer, size_t len);

static inline u16 crc16_byte(u16 crc, const u8 data)
{
	return (crc >> 8) ^ crc16_table[(crc ^ data) & 0xff];
}

#endif /* __CRC16_H */

Tue Jul 19 12:35:21 PDT 2016
Fri Jul 22 15:40:33 PDT 2016
Sun, Jul 24, 2016  1:34:29 PM
Mon, Jul 25, 2016  7:58:19 PM
Tue, Jul 26, 2016  2:33:05 PM
