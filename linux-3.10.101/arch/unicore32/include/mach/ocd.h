/*
 * linux/arch/unicore32/include/mach/ocd.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __MACH_PUV3_OCD_H__
#define __MACH_PUV3_OCD_H__

#if defined(CONFIG_DEBUG_OCD)
static inline void ocd_putc(unsigned int c)
{
	int status, i = 0x2000000;

	do {
		if (--i < 0)
			return;

		asm volatile ("movc %0, p1.c0, #0" : "=r" (status));
	} while (status & 2);

	asm("movc p1.c1, %0, #1" : : "r" (c));
}

#define putc(ch)	ocd_putc(ch)
#else
#define putc(ch)
#endif

#endif
Tue Jul 19 12:40:36 PDT 2016
Fri Jul 22 15:50:43 PDT 2016
Sun, Jul 24, 2016  2:48:35 PM
Mon, Jul 25, 2016  9:23:18 PM
