/*
 *  arch/arm/mach-pnx4008/include/mach/uncompress.h
 *
 *  Copyright (C) 1999 ARM Limited
 *  Copyright (C) 2006 MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#define UART5_BASE 0x40090000

#define UART5_DR    (*(volatile unsigned char *) (UART5_BASE))
#define UART5_FR    (*(volatile unsigned char *) (UART5_BASE + 18))

static __inline__ void putc(char c)
{
	while (UART5_FR & (1 << 5))
		barrier();

	UART5_DR = c;
}

/*
 * This does not append a newline
 */
static inline void flush(void)
{
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
#define arch_decomp_wdog()
Tue Jul 19 12:33:14 PDT 2016
Fri Jul 22 15:37:32 PDT 2016
Sun, Jul 24, 2016  1:12:03 PM
Mon, Jul 25, 2016  6:18:41 PM
Mon, Jul 25, 2016  7:31:58 PM
Tue, Jul 26, 2016  2:08:12 PM
