/*
 *  arch/arm/include/asm/localtimer.h
 *
 *  Copyright (C) 2004-2005 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_ARM_LOCALTIMER_H
#define __ASM_ARM_LOCALTIMER_H

#include <linux/errno.h>

struct clock_event_device;

/*
 * Setup a per-cpu timer, whether it be a local timer or dummy broadcast
 */
void percpu_timer_setup(void);

/*
 * Called from assembly, this is the local timer IRQ handler
 */
asmlinkage void do_local_timer(struct pt_regs *);


#ifdef CONFIG_LOCAL_TIMERS

#ifdef CONFIG_HAVE_ARM_TWD

#include "smp_twd.h"

#define local_timer_ack()	twd_timer_ack()

#else

/*
 * Platform provides this to acknowledge a local timer IRQ.
 * Returns true if the local timer IRQ is to be processed.
 */
int local_timer_ack(void);

#endif

/*
 * Setup a local timer interrupt for a CPU.
 */
int local_timer_setup(struct clock_event_device *);

#else

static inline int local_timer_setup(struct clock_event_device *evt)
{
	return -ENXIO;
}
#endif

#endif
Tue Jul 19 12:36:37 PDT 2016
Fri Jul 22 15:43:03 PDT 2016
Sun, Jul 24, 2016  1:52:49 PM
Mon, Jul 25, 2016  8:19:57 PM
