/* linux/arch/arm/mach-s5pv210/include/mach/memory.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV210 - Memory definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

#define PLAT_PHYS_OFFSET		UL(0x20000000)

/*
 * Sparsemem support
 * Physical memory can be located from 0x20000000 to 0x7fffffff,
 * so MAX_PHYSMEM_BITS is 31.
 */

#define MAX_PHYSMEM_BITS	31
#define SECTION_SIZE_BITS	28

#endif /* __ASM_ARCH_MEMORY_H */
Tue Jul 19 12:40:24 PDT 2016
Fri Jul 22 15:50:19 PDT 2016
Sun, Jul 24, 2016  2:45:43 PM
Mon, Jul 25, 2016  9:20:00 PM
