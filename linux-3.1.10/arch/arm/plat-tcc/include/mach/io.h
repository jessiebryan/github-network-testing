/*
 * IO definitions for TCC8000 processors and boards
 *
 * Copyright (C) 1997-1999 Russell King
 * Copyright (C) 2008-2009 Telechips
 * Copyright (C) 2010 Hans J. Koch <hjk@linutronix.de>
 *
 * Licensed under the terms of the GNU Public License version 2.
 */

#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

/*
 * We don't actually have real ISA nor PCI buses, but there is so many
 * drivers out there that might just work if we fake them...
 */
#define __io(a)			__typesafe_io(a)
#define __mem_pci(a)		(a)

#endif
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:33 PM
Mon, Jul 25, 2016  6:19:16 PM
Mon, Jul 25, 2016  7:32:33 PM
Tue, Jul 26, 2016  2:08:44 PM
