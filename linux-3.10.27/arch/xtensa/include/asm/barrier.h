/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2012 Tensilica Inc.
 */

#ifndef _XTENSA_SYSTEM_H
#define _XTENSA_SYSTEM_H

#define smp_read_barrier_depends() do { } while(0)
#define read_barrier_depends() do { } while(0)

#define mb()  ({ __asm__ __volatile__("memw" : : : "memory"); })
#define rmb() barrier()
#define wmb() mb()

#ifdef CONFIG_SMP
#error smp_* not defined
#else
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#endif

#define set_mb(var, value)	do { var = value; mb(); } while (0)

#endif /* _XTENSA_SYSTEM_H */
Tue Jul 19 12:52:20 PDT 2016
Fri Jul 22 16:12:37 PDT 2016
Sun, Jul 24, 2016  5:35:18 PM
Tue, Jul 26, 2016 12:28:46 AM
