/*
 * OpenRISC Linux
 *
 * Copyright (C) 2010-2011 Jonas Bonn <jonas@southpole.se>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __ASM_OPENRISC_FFS_H
#define __ASM_OPENRISC_FFS_H

#ifdef CONFIG_OPENRISC_HAVE_INST_FF1

static inline int ffs(int x)
{
	int ret;

	__asm__ ("l.ff1 %0,%1"
		 : "=r" (ret)
		 : "r" (x));

	return ret;
}

#else
#include <asm-generic/bitops/ffs.h>
#endif

#endif /* __ASM_OPENRISC_FFS_H */
Tue Jul 19 12:39:53 PDT 2016
Fri Jul 22 15:49:18 PDT 2016
Sun, Jul 24, 2016  2:38:20 PM
Mon, Jul 25, 2016  9:11:45 PM
