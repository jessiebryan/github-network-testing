/*
 * linux/arch/arm/mach-mmp/include/mach/io.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_MACH_IO_H
#define __ASM_MACH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

/*
 * We don't actually have real ISA nor PCI buses, but there is so many
 * drivers out there that might just work if we fake them...
 */
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#endif /* __ASM_MACH_IO_H */
Tue Jul 19 12:36:04 PDT 2016
Fri Jul 22 15:41:57 PDT 2016
Sun, Jul 24, 2016  1:44:53 PM
Mon, Jul 25, 2016  8:10:37 PM
Tue, Jul 26, 2016  2:44:36 PM
