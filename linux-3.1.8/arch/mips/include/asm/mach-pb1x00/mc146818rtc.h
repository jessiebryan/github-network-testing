/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1998, 2001, 03 by Ralf Baechle
 *
 * RTC routines for PC style attached Dallas chip.
 */
#ifndef __ASM_MACH_AU1XX_MC146818RTC_H
#define __ASM_MACH_AU1XX_MC146818RTC_H

#include <asm/io.h>
#include <asm/mach-au1x00/au1000.h>

#define RTC_PORT(x)	(0x0c000000 + (x))
#define RTC_IRQ		8
#define PB1500_RTC_ADDR 0x0c000000

static inline unsigned char CMOS_READ(unsigned long offset)
{
	offset <<= 2;
	return (u8)(au_readl(offset + PB1500_RTC_ADDR) & 0xff);
}

static inline void CMOS_WRITE(unsigned char data, unsigned long offset)
{
	offset <<= 2;
	au_writel(data, offset + PB1500_RTC_ADDR);
}

#define RTC_ALWAYS_BCD	1

#endif /* __ASM_MACH_AU1XX_MC146818RTC_H */
Tue Jul 19 12:37:21 PDT 2016
Fri Jul 22 15:44:27 PDT 2016
Sun, Jul 24, 2016  2:03:10 PM
Mon, Jul 25, 2016  8:32:14 PM
