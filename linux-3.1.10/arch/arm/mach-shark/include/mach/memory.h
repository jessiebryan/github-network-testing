/*
 * arch/arm/mach-shark/include/mach/memory.h
 *
 * by Alexander Schulz
 *
 * derived from:
 * arch/arm/mach-ebsa110/include/mach/memory.h
 * Copyright (c) 1996-1999 Russell King.
 */
#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

#include <asm/sizes.h>

/*
 * Physical DRAM offset.
 */
#define PLAT_PHYS_OFFSET     UL(0x08000000)

/*
 * Cache flushing area
 */
#define FLUSH_BASE_PHYS		0x80000000
#define FLUSH_BASE		0xdf000000

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:15 PM
Mon, Jul 25, 2016  6:18:55 PM
Mon, Jul 25, 2016  7:32:11 PM
Tue, Jul 26, 2016  2:08:24 PM
