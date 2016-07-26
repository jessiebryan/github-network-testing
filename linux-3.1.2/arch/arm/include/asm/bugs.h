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
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:45 PM
Mon, Jul 25, 2016  6:27:54 PM
Mon, Jul 25, 2016  7:41:01 PM
Tue, Jul 26, 2016  2:16:46 PM
