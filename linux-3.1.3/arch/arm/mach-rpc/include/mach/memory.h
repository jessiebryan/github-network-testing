/*
 *  arch/arm/mach-rpc/include/mach/memory.h
 *
 *  Copyright (C) 1996,1997,1998 Russell King.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  Changelog:
 *   20-Oct-1996 RMK	Created
 *   31-Dec-1997 RMK	Fixed definitions to reduce warnings
 *   11-Jan-1998 RMK	Uninlined to reduce hits on cache
 *   08-Feb-1998 RMK	Added __virt_to_bus and __bus_to_virt
 *   21-Mar-1999 RMK	Renamed to memory.h
 *		 RMK	Added TASK_SIZE and PAGE_OFFSET
 */
#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

/*
 * Physical DRAM offset.
 */
#define PLAT_PHYS_OFFSET	UL(0x10000000)

/*
 * Cache flushing area - ROM
 */
#define FLUSH_BASE_PHYS		0x00000000
#define FLUSH_BASE		0xdf000000

/*
 * Sparsemem support.  Each section is a maximum of 64MB.  The sections
 * are offset by 128MB and can cover 128MB, so that gives us a maximum
 * of 29 physmem bits.
 */
#define MAX_PHYSMEM_BITS	29
#define SECTION_SIZE_BITS	26

#endif
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:44 PDT 2016
Sun, Jul 24, 2016  1:28:39 PM
Mon, Jul 25, 2016  6:38:33 PM
Mon, Jul 25, 2016  7:51:26 PM
Tue, Jul 26, 2016  2:26:39 PM
