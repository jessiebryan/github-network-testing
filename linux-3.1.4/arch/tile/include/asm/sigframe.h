/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

#ifndef _ASM_TILE_SIGFRAME_H
#define _ASM_TILE_SIGFRAME_H

/* Indicate that syscall return should not examine r0 */
#define INT_SWINT_1_SIGRETURN (~0)

#ifndef __ASSEMBLY__

#include <arch/abi.h>

struct rt_sigframe {
	unsigned char save_area[C_ABI_SAVE_AREA_SIZE]; /* caller save area */
	struct siginfo info;
	struct ucontext uc;
};

#endif /* !__ASSEMBLY__ */

#endif /* _ASM_TILE_SIGFRAME_H */
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:16 PDT 2016
Sun, Jul 24, 2016  1:39:39 PM
Mon, Jul 25, 2016  8:04:26 PM
Tue, Jul 26, 2016  2:38:50 PM
