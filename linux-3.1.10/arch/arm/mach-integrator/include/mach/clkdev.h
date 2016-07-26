#ifndef __ASM_MACH_CLKDEV_H
#define __ASM_MACH_CLKDEV_H

#include <linux/module.h>
#include <plat/clock.h>

struct clk {
	unsigned long		rate;
	const struct clk_ops	*ops;
	struct module		*owner;
	const struct icst_params *params;
	void __iomem		*vcoreg;
	void			*data;
};

static inline int __clk_get(struct clk *clk)
{
	return try_module_get(clk->owner);
}

static inline void __clk_put(struct clk *clk)
{
	module_put(clk->owner);
}

#endif
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:30 PDT 2016
Sun, Jul 24, 2016  1:11:48 PM
Mon, Jul 25, 2016  6:18:22 PM
Mon, Jul 25, 2016  7:31:40 PM
Tue, Jul 26, 2016  2:07:55 PM
