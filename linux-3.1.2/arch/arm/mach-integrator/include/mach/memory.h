/*
 *  arch/arm/mach-integrator/include/mach/memory.h
 *
 *  Copyright (C) 1999 ARM Limited
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
#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

/*
 * Physical DRAM offset.
 */
#define PLAT_PHYS_OFFSET	UL(0x00000000)

#define BUS_OFFSET	UL(0x80000000)
#define __virt_to_bus(x)	((x) - PAGE_OFFSET + BUS_OFFSET)
#define __bus_to_virt(x)	((x) - BUS_OFFSET + PAGE_OFFSET)
#define __pfn_to_bus(x)		(__pfn_to_phys(x) + (BUS_OFFSET - PHYS_OFFSET))
#define __bus_to_pfn(x)		__phys_to_pfn((x) - (BUS_OFFSET - PHYS_OFFSET))

#endif
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:02 PM
Mon, Jul 25, 2016  6:28:14 PM
Mon, Jul 25, 2016  7:41:21 PM
Tue, Jul 26, 2016  2:17:05 PM
