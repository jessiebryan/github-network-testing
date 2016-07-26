/*
 * arch/arm/mach-shark/include/mach/io.h
 *
 * by Alexander Schulz
 *
 * derived from:
 * arch/arm/mach-ebsa110/include/mach/io.h
 * Copyright (C) 1997,1998 Russell King
 */

#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

#define __io(a)                 ((void __iomem *)(0xe0000000 + (a)))

#define __mem_pci(addr) (addr)

#endif
Tue Jul 19 12:35:32 PDT 2016
Fri Jul 22 15:40:53 PDT 2016
Sun, Jul 24, 2016  1:37:00 PM
Mon, Jul 25, 2016  8:01:18 PM
Tue, Jul 26, 2016  2:35:53 PM
