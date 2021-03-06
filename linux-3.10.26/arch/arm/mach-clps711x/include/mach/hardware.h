/*
 *  arch/arm/mach-clps711x/include/mach/hardware.h
 *
 *  This file contains the hardware definitions of the Prospector P720T.
 *
 *  Copyright (C) 2000 Deep Blue Solutions Ltd.
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
#ifndef __MACH_HARDWARE_H
#define __MACH_HARDWARE_H

#include <mach/clps711x.h>

#define IO_ADDRESS(x)		(0xdc000000 + (((x) & 0x03ffffff) | \
				(((x) >> 2) & 0x3c000000)))

#define CLPS711X_VIRT_BASE	IOMEM(IO_ADDRESS(CLPS711X_PHYS_BASE))

#ifndef __ASSEMBLY__
#define clps_readb(off)		readb(CLPS711X_VIRT_BASE + (off))
#define clps_readw(off)		readw(CLPS711X_VIRT_BASE + (off))
#define clps_readl(off)		readl(CLPS711X_VIRT_BASE + (off))
#define clps_writeb(val,off)	writeb(val, CLPS711X_VIRT_BASE + (off))
#define clps_writew(val,off)	writew(val, CLPS711X_VIRT_BASE + (off))
#define clps_writel(val,off)	writel(val, CLPS711X_VIRT_BASE + (off))
#endif

/*
 * The physical addresses that the external chip select signals map to is
 * dependent on the setting of the nMEDCHG signal on EP7211 and EP7212
 * processors.  CONFIG_EP72XX_BOOT_ROM is only available if these
 * processors are in use.
 */
#ifndef CONFIG_EP72XX_ROM_BOOT
#define CS0_PHYS_BASE		(0x00000000)
#define CS1_PHYS_BASE		(0x10000000)
#define CS2_PHYS_BASE		(0x20000000)
#define CS3_PHYS_BASE		(0x30000000)
#define CS4_PHYS_BASE		(0x40000000)
#define CS5_PHYS_BASE		(0x50000000)
#define CS6_PHYS_BASE		(0x60000000)
#define CS7_PHYS_BASE		(0x70000000)
#else
#define CS0_PHYS_BASE		(0x70000000)
#define CS1_PHYS_BASE		(0x60000000)
#define CS2_PHYS_BASE		(0x50000000)
#define CS3_PHYS_BASE		(0x40000000)
#define CS4_PHYS_BASE		(0x30000000)
#define CS5_PHYS_BASE		(0x20000000)
#define CS6_PHYS_BASE		(0x10000000)
#define CS7_PHYS_BASE		(0x00000000)
#endif

#define CLPS711X_SRAM_BASE	CS6_PHYS_BASE
#define CLPS711X_SRAM_SIZE	(48 * 1024)

#define CLPS711X_SDRAM0_BASE	(0xc0000000)
#define CLPS711X_SDRAM1_BASE	(0xd0000000)

#if defined (CONFIG_ARCH_EDB7211)

/* The extra 8 lines of the keyboard matrix are wired to chip select 3 */
#define EP7211_PHYS_EXTKBD	CS3_PHYS_BASE

#endif /* CONFIG_ARCH_EDB7211 */

#endif
Tue Jul 19 12:51:26 PDT 2016
Fri Jul 22 16:10:50 PDT 2016
Sun, Jul 24, 2016  5:22:22 PM
Tue, Jul 26, 2016 12:14:29 AM
