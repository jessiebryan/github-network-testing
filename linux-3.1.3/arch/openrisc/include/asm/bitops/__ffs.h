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

#ifndef __ASM_OPENRISC___FFS_H
#define __ASM_OPENRISC___FFS_H


#ifdef CONFIG_OPENRISC_HAVE_INST_FF1

static inline unsigned long __ffs(unsigned long x)
{
	int ret;

	__asm__ ("l.ff1 %0,%1"
		 : "=r" (ret)
		 : "r" (x));

	return ret-1;
}

#else
#include <asm-generic/bitops/__ffs.h>
#endif

#endif /* __ASM_OPENRISC___FFS_H */
Tue Jul 19 12:34:57 PDT 2016
Fri Jul 22 15:40:00 PDT 2016
Sun, Jul 24, 2016  1:30:29 PM
Mon, Jul 25, 2016  6:40:45 PM
Mon, Jul 25, 2016  7:53:35 PM
Tue, Jul 26, 2016  2:28:42 PM
