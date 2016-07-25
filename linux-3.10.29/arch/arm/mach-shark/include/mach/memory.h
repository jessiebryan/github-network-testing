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
Tue Jul 19 12:53:24 PDT 2016
Fri Jul 22 16:14:42 PDT 2016
Sun, Jul 24, 2016  5:50:44 PM
