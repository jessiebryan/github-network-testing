/*
 * arch/arm/mach-ep93xx/include/mach/memory.h
 */

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

#if defined(CONFIG_EP93XX_SDCE3_SYNC_PHYS_OFFSET)
#define PLAT_PHYS_OFFSET		UL(0x00000000)
#elif defined(CONFIG_EP93XX_SDCE0_PHYS_OFFSET)
#define PLAT_PHYS_OFFSET		UL(0xc0000000)
#elif defined(CONFIG_EP93XX_SDCE1_PHYS_OFFSET)
#define PLAT_PHYS_OFFSET		UL(0xd0000000)
#elif defined(CONFIG_EP93XX_SDCE2_PHYS_OFFSET)
#define PLAT_PHYS_OFFSET		UL(0xe0000000)
#elif defined(CONFIG_EP93XX_SDCE3_ASYNC_PHYS_OFFSET)
#define PLAT_PHYS_OFFSET		UL(0xf0000000)
#else
#error "Kconfig bug: No EP93xx PHYS_OFFSET set"
#endif

#endif
Tue Jul 19 12:52:44 PDT 2016
Fri Jul 22 16:13:23 PDT 2016
Sun, Jul 24, 2016  5:41:00 PM
Tue, Jul 26, 2016 12:35:04 AM
