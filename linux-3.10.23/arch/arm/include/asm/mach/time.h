/*
 * arch/arm/include/asm/mach/time.h
 *
 * Copyright (C) 2004 MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_ARM_MACH_TIME_H
#define __ASM_ARM_MACH_TIME_H

extern void timer_tick(void);

struct timespec;
typedef void (*clock_access_fn)(struct timespec *);
extern int register_persistent_clock(clock_access_fn read_boot,
				     clock_access_fn read_persistent);

#endif
Tue Jul 19 12:49:29 PDT 2016
Fri Jul 22 16:07:07 PDT 2016
Sun, Jul 24, 2016  4:54:19 PM
Mon, Jul 25, 2016 11:43:34 PM
