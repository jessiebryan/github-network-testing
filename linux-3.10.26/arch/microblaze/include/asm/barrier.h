/*
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_BARRIER_H
#define _ASM_MICROBLAZE_BARRIER_H

#define nop()                  asm volatile ("nop")

#define smp_read_barrier_depends()	do {} while (0)
#define read_barrier_depends()		do {} while (0)

#define mb()			barrier()
#define rmb()			mb()
#define wmb()			mb()
#define set_mb(var, value)	do { var = value; mb(); } while (0)
#define set_wmb(var, value)	do { var = value; wmb(); } while (0)

#define smp_mb()		mb()
#define smp_rmb()		rmb()
#define smp_wmb()		wmb()

#endif /* _ASM_MICROBLAZE_BARRIER_H */
Tue Jul 19 12:51:33 PDT 2016
Fri Jul 22 16:11:04 PDT 2016
Sun, Jul 24, 2016  5:24:00 PM
Tue, Jul 26, 2016 12:16:18 AM
