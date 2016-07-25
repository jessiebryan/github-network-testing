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

struct local_timer_ops {
	int  (*setup)(struct clock_event_device *);
	void (*stop)(struct clock_event_device *);
};

#ifdef CONFIG_LOCAL_TIMERS
/*
 * Register a local timer driver
 */
int local_timer_register(struct local_timer_ops *);
#else
static inline int local_timer_register(struct local_timer_ops *ops)
{
	return -ENXIO;
}
#endif

#endif
Tue Jul 19 12:52:43 PDT 2016
Fri Jul 22 16:13:22 PDT 2016
Sun, Jul 24, 2016  5:40:52 PM
