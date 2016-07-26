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
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:15 PM
Mon, Jul 25, 2016  6:18:54 PM
Mon, Jul 25, 2016  7:32:11 PM
Tue, Jul 26, 2016  2:08:24 PM
