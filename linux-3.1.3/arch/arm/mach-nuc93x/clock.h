/*
 * linux/arch/arm/mach-nuc93x/clock.h
 *
 * Copyright (c) 2008 Nuvoton technology corporation
 *
 * Wan ZongShun <mcuos.com@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License.
 */

#include <linux/clkdev.h>

void nuc93x_clk_enable(struct clk *clk, int enable);
void clks_register(struct clk_lookup *clks, size_t num);

struct clk {
	unsigned long		cken;
	unsigned int		enabled;
	void			(*enable)(struct clk *, int enable);
};

#define DEFINE_CLK(_name, _ctrlbit)			\
struct clk clk_##_name = {				\
		.enable	= nuc93x_clk_enable,		\
		.cken	= (1 << _ctrlbit),		\
	}

#define DEF_CLKLOOK(_clk, _devname, _conname)		\
	{						\
		.clk		= _clk,			\
		.dev_id		= _devname,		\
		.con_id		= _conname,		\
	}

Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:42 PDT 2016
Sun, Jul 24, 2016  1:28:28 PM
Mon, Jul 25, 2016  6:38:21 PM
Mon, Jul 25, 2016  7:51:14 PM
Tue, Jul 26, 2016  2:26:27 PM
