/* Internal definitions for the arch part of the core kernel
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */

struct clocksource;
struct clock_event_device;

/*
 * kthread.S
 */
extern int kernel_thread_helper(int);

/*
 * entry.S
 */
extern void ret_from_fork(struct task_struct *) __attribute__((noreturn));

/*
 * smp-low.S
 */
#ifdef CONFIG_SMP
extern void mn10300_low_ipi_handler(void);
#endif

/*
 * smp.c
 */
#ifdef CONFIG_SMP
extern void smp_jump_to_debugger(void);
#endif

/*
 * time.c
 */
extern irqreturn_t local_timer_interrupt(void);
Tue Jul 19 12:34:57 PDT 2016
Fri Jul 22 15:40:00 PDT 2016
Sun, Jul 24, 2016  1:30:28 PM
Mon, Jul 25, 2016  6:40:43 PM
Mon, Jul 25, 2016  7:53:34 PM
Tue, Jul 26, 2016  2:28:40 PM
