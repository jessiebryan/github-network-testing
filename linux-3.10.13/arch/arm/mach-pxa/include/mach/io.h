/*
 * arch/arm/mach-pxa/include/mach/io.h
 *
 * Copied from asm/arch/sa1100/io.h
 */
#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

/*
 * We don't actually have real ISA nor PCI buses, but there is so many
 * drivers out there that might just work if we fake them...
 */
#define __io(a)		__typesafe_io(a)

#endif
Tue Jul 19 12:43:09 PDT 2016
Fri Jul 22 15:55:15 PDT 2016
Sun, Jul 24, 2016  3:22:28 PM
Mon, Jul 25, 2016 10:01:24 PM
