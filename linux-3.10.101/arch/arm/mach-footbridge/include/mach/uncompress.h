/*
 *  arch/arm/mach-footbridge/include/mach/uncompress.h
 *
 *  Copyright (C) 1996-1999 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <asm/mach-types.h>

/*
 * Note! This could cause problems on the NetWinder
 */
#define DC21285_BASE ((volatile unsigned int *)0x42000160)
#define SER0_BASE    ((volatile unsigned char *)0x7c0003f8)

static inline void putc(char c)
{
	if (machine_is_netwinder()) {
		while ((SER0_BASE[5] & 0x60) != 0x60)
			barrier();
		SER0_BASE[0] = c;
	} else {
		while (DC21285_BASE[6] & 8);
		DC21285_BASE[0] = c;
	}
}

static inline void flush(void)
{
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
Tue Jul 19 12:40:22 PDT 2016
Fri Jul 22 15:50:16 PDT 2016
Sun, Jul 24, 2016  2:45:22 PM
Mon, Jul 25, 2016  9:19:36 PM
