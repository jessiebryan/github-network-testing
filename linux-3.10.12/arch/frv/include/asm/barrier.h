/* FR-V CPU memory barrier definitions
 *
 * Copyright (C) 2003 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _ASM_BARRIER_H
#define _ASM_BARRIER_H

#define nop()			asm volatile ("nop"::)

#define mb()			asm volatile ("membar" : : :"memory")
#define rmb()			asm volatile ("membar" : : :"memory")
#define wmb()			asm volatile ("membar" : : :"memory")
#define read_barrier_depends()	do { } while (0)

#define smp_mb()			barrier()
#define smp_rmb()			barrier()
#define smp_wmb()			barrier()
#define smp_read_barrier_depends()	do {} while(0)
#define set_mb(var, value) \
	do { var = (value); barrier(); } while (0)

#endif /* _ASM_BARRIER_H */
Tue Jul 19 12:42:33 PDT 2016
Fri Jul 22 15:54:10 PDT 2016
Sun, Jul 24, 2016  3:14:00 PM
Mon, Jul 25, 2016  9:51:58 PM
