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
Tue Jul 19 12:49:39 PDT 2016
Fri Jul 22 16:07:26 PDT 2016
Sun, Jul 24, 2016  4:56:40 PM
Mon, Jul 25, 2016 11:46:11 PM
