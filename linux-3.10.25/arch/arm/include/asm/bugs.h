/*
 *  arch/arm/include/asm/bugs.h
 *
 *  Copyright (C) 1995-2003 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_BUGS_H
#define __ASM_BUGS_H

#ifdef CONFIG_MMU
extern void check_writebuffer_bugs(void);

#define check_bugs() check_writebuffer_bugs()
#else
#define check_bugs() do { } while (0)
#endif

#endif
Tue Jul 19 12:50:46 PDT 2016
Fri Jul 22 16:09:33 PDT 2016
Sun, Jul 24, 2016  5:12:53 PM
Tue, Jul 26, 2016 12:04:01 AM
