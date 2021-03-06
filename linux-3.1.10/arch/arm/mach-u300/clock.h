/*
 * arch/arm/mach-u300/include/mach/clock.h
 *
 * Copyright (C) 2004 - 2005 Nokia corporation
 * Written by Tuukka Tikkanen <tuukka.tikkanen@elektrobit.com>
 * Based on clocks.h by Tony Lindgren, Gordon McNutt and RidgeRun, Inc
 * Copyright (C) 2007-2009 ST-Ericsson AB
 * Adopted to ST-Ericsson U300 platforms by
 * Jonas Aaberg <jonas.aberg@stericsson.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef __MACH_CLOCK_H
#define __MACH_CLOCK_H

#include <linux/clk.h>

struct clk {
	struct list_head node;
	struct module *owner;
	struct device *dev;
	const char *name;
	struct clk *parent;

	spinlock_t lock;
	unsigned long rate;
	bool reset;
	__u16 clk_val;
	__s8 usecount;
	void __iomem * res_reg;
	__u16 res_mask;

	bool hw_ctrld;

	void (*recalc) (struct clk *);
	int (*set_rate) (struct clk *, unsigned long);
	unsigned long (*get_rate) (struct clk *);
	unsigned long (*round_rate) (struct clk *, unsigned long);
	void (*init) (struct clk *);
	void (*enable) (struct clk *);
	void (*disable) (struct clk *);
};

int u300_clock_init(void);

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:18 PM
Mon, Jul 25, 2016  6:18:58 PM
Mon, Jul 25, 2016  7:32:15 PM
Tue, Jul 26, 2016  2:08:28 PM
