/*
 * Clock management for AT32AP CPUs
 *
 * Copyright (C) 2006 Atmel Corporation
 *
 * Based on arch/arm/mach-at91/clock.c
 *   Copyright (C) 2005 David Brownell
 *   Copyright (C) 2005 Ivan Kokshaysky
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/clk.h>
#include <linux/list.h>


void at32_clk_register(struct clk *clk);

struct clk {
	struct list_head list;		/* linking element */
	const char	*name;		/* Clock name/function */
	struct device	*dev;		/* Device the clock is used by */
	struct clk	*parent;	/* Parent clock, if any */
	void		(*mode)(struct clk *clk, int enabled);
	unsigned long	(*get_rate)(struct clk *clk);
	long		(*set_rate)(struct clk *clk, unsigned long rate,
				    int apply);
	int		(*set_parent)(struct clk *clk, struct clk *parent);
	u16		users;		/* Enabled if non-zero */
	u16		index;		/* Sibling index */
};

unsigned long pba_clk_get_rate(struct clk *clk);
void pba_clk_mode(struct clk *clk, int enabled);
Tue Jul 19 12:46:19 PDT 2016
Fri Jul 22 16:01:12 PDT 2016
Sun, Jul 24, 2016  4:08:57 PM
Mon, Jul 25, 2016 10:53:05 PM
