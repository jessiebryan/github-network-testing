#ifndef __MACH_COMMON_CLKDEV_H
#define __MACH_COMMON_CLKDEV_H

#include <linux/clk.h>

struct clk_ops {
	unsigned long (*get_rate)(struct clk *clk);
	unsigned long (*round_rate)(struct clk *clk, unsigned long rate);
	int (*set_rate)(struct clk *clk, unsigned long rate);
	int (*enable)(struct clk *clk);
	int (*disable)(struct clk *clk);
};

struct clk {
	const char		*name;
	unsigned long           rate;
	spinlock_t 		lock;
	u32			flags;
	const struct clk_ops    *ops;
	const struct params 	*params;
	void __iomem            *reg;
	u32			mask;
	u32			shift;
};

#endif

Tue Jul 19 12:49:33 PDT 2016
Fri Jul 22 16:07:15 PDT 2016
Sun, Jul 24, 2016  4:55:15 PM
Mon, Jul 25, 2016 11:44:37 PM
