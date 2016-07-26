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

Tue Jul 19 12:50:50 PDT 2016
Fri Jul 22 16:09:41 PDT 2016
Sun, Jul 24, 2016  5:13:53 PM
Tue, Jul 26, 2016 12:05:07 AM
