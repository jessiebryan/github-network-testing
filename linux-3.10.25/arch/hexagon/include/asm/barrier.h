/*
 * Memory barrier definitions for the Hexagon architecture
 *
 * Copyright (c) 2010-2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef _ASM_BARRIER_H
#define _ASM_BARRIER_H

#define rmb()				barrier()
#define read_barrier_depends()		barrier()
#define wmb()				barrier()
#define mb()				barrier()
#define smp_rmb()			barrier()
#define smp_read_barrier_depends()	barrier()
#define smp_wmb()			barrier()
#define smp_mb()			barrier()
#define smp_mb__before_atomic_dec()	barrier()
#define smp_mb__after_atomic_dec()	barrier()
#define smp_mb__before_atomic_inc()	barrier()
#define smp_mb__after_atomic_inc()	barrier()

/*  Set a value and use a memory barrier.  Used by the scheduler somewhere.  */
#define set_mb(var, value) \
	do { var = value; mb(); } while (0)

#endif /* _ASM_BARRIER_H */
Tue Jul 19 12:50:52 PDT 2016
Fri Jul 22 16:09:44 PDT 2016
Sun, Jul 24, 2016  5:14:15 PM
Tue, Jul 26, 2016 12:05:32 AM
