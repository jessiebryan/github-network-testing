/* arch/arm/mach-vt8500/include/mach/uncompress.h
 *
 * Copyright (C) 2010 Alexey Charkov <alchark@gmail.com>
 *
 * Based on arch/arm/mach-dove/include/mach/uncompress.h
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define UART0_PHYS 0xd8200000
#include <asm/io.h>

static void putc(const char c)
{
	while (readb(UART0_PHYS + 0x1c) & 0x2)
		/* Tx busy, wait and poll */;

	writeb(c, UART0_PHYS);
}

static void flush(void)
{
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
#define arch_decomp_wdog()
Tue Jul 19 12:35:32 PDT 2016
Fri Jul 22 15:40:54 PDT 2016
Sun, Jul 24, 2016  1:37:06 PM
Mon, Jul 25, 2016  8:01:25 PM
Tue, Jul 26, 2016  2:36:00 PM
