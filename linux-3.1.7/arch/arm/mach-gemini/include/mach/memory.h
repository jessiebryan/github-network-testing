/*
 *  Copyright (C) 2001-2006 Storlink, Corp.
 *  Copyright (C) 2008-2009 Paulius Zaleckas <paulius.zaleckas@teltonika.lt>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#ifndef __MACH_MEMORY_H
#define __MACH_MEMORY_H

#ifdef CONFIG_GEMINI_MEM_SWAP
# define PLAT_PHYS_OFFSET	UL(0x00000000)
#else
# define PLAT_PHYS_OFFSET	UL(0x10000000)
#endif

#endif /* __MACH_MEMORY_H */
Tue Jul 19 12:36:38 PDT 2016
Fri Jul 22 15:43:04 PDT 2016
Sun, Jul 24, 2016  1:53:01 PM
Mon, Jul 25, 2016  8:20:12 PM
