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

#ifndef __ASM_OPENRISC_FLS_H
#define __ASM_OPENRISC_FLS_H


#ifdef CONFIG_OPENRISC_HAVE_INST_FL1

static inline int fls(int x)
{
	int ret;

	__asm__ ("l.fl1 %0,%1"
		 : "=r" (ret)
		 : "r" (x));

	return ret;
}

#else
#include <asm-generic/bitops/fls.h>
#endif

#endif /* __ASM_OPENRISC_FLS_H */
Tue Jul 19 12:50:56 PDT 2016
Fri Jul 22 16:09:53 PDT 2016
Sun, Jul 24, 2016  5:15:18 PM
Tue, Jul 26, 2016 12:06:42 AM
