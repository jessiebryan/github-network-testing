/*
 * Copyright (C) 2012 Imagination Technologies Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef _ASM_METAG_SWITCH_H
#define _ASM_METAG_SWITCH_H

/* metag SWITCH codes */
#define __METAG_SW_PERM_BREAK	0x400002	/* compiled in breakpoint */
#define __METAG_SW_SYS_LEGACY	0x440000	/* legacy system calls */
#define __METAG_SW_SYS		0x440001	/* system calls */

/* metag SWITCH instruction encoding */
#define __METAG_SW_ENCODING(TYPE)	(0xaf000000 | (__METAG_SW_##TYPE))

#endif /* _ASM_METAG_SWITCH_H */
Tue Jul 19 12:48:57 PDT 2016
Fri Jul 22 16:06:07 PDT 2016
Sun, Jul 24, 2016  4:46:49 PM
Mon, Jul 25, 2016 11:35:12 PM
