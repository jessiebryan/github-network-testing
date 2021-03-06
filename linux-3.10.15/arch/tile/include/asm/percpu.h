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

#ifndef _ASM_TILE_PERCPU_H
#define _ASM_TILE_PERCPU_H

register unsigned long __my_cpu_offset __asm__("tp");
#define __my_cpu_offset __my_cpu_offset
#define set_my_cpu_offset(tp) (__my_cpu_offset = (tp))

#include <asm-generic/percpu.h>

#endif /* _ASM_TILE_PERCPU_H */
Tue Jul 19 12:44:38 PDT 2016
Fri Jul 22 15:58:00 PDT 2016
Sun, Jul 24, 2016  3:43:47 PM
Mon, Jul 25, 2016 10:25:06 PM
