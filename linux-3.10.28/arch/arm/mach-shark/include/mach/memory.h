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
Tue Jul 19 12:52:45 PDT 2016
Fri Jul 22 16:13:26 PDT 2016
Sun, Jul 24, 2016  5:41:24 PM
Tue, Jul 26, 2016 12:35:30 AM
