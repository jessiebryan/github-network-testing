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

#include <linux/irqreturn.h>

struct clocksource;
struct clock_event_device;

/*
 * entry.S
 */
extern void ret_from_fork(struct task_struct *) __attribute__((noreturn));
extern void ret_from_kernel_thread(struct task_struct *) __attribute__((noreturn));

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
Tue Jul 19 12:45:49 PDT 2016
Fri Jul 22 16:00:14 PDT 2016
Sun, Jul 24, 2016  4:01:16 PM
Mon, Jul 25, 2016 10:44:34 PM
