/*
 * arch/arm/mach-at91/include/mach/io.h
 *
 *  Copyright (C) 2003 SAN People
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

#ifndef __ASM_ARCH_IO_H
#define __ASM_ARCH_IO_H

#include <mach/hardware.h>

#define IO_SPACE_LIMIT		0xFFFFFFFF

#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#ifndef __ASSEMBLY__

#ifndef CONFIG_ARCH_AT91X40
#define __arch_ioremap	at91_ioremap
#define __arch_iounmap	at91_iounmap
#endif

void __iomem *at91_ioremap(unsigned long phys, size_t size, unsigned int type);
void at91_iounmap(volatile void __iomem *addr);

static inline unsigned int at91_sys_read(unsigned int reg_offset)
{
	void __iomem *addr = (void __iomem *)AT91_VA_BASE_SYS;

	return __raw_readl(addr + reg_offset);
}

static inline void at91_sys_write(unsigned int reg_offset, unsigned long value)
{
	void __iomem *addr = (void __iomem *)AT91_VA_BASE_SYS;

	__raw_writel(value, addr + reg_offset);
}

#endif

#endif
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:54 PM
Mon, Jul 25, 2016  6:28:05 PM
Mon, Jul 25, 2016  7:41:11 PM
Tue, Jul 26, 2016  2:16:56 PM
