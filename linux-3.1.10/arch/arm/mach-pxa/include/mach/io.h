/*
 * arch/arm/mach-pxa/include/mach/io.h
 *
 * Copied from asm/arch/sa1100/io.h
 */
#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#include <mach/hardware.h>

#define IO_SPACE_LIMIT 0xffffffff

/*
 * We don't actually have real ISA nor PCI buses, but there is so many
 * drivers out there that might just work if we fake them...
 */
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#endif
Tue Jul 19 12:33:14 PDT 2016
Fri Jul 22 15:37:32 PDT 2016
Sun, Jul 24, 2016  1:12:05 PM
Mon, Jul 25, 2016  6:18:42 PM
Mon, Jul 25, 2016  7:32:00 PM
Tue, Jul 26, 2016  2:08:13 PM
