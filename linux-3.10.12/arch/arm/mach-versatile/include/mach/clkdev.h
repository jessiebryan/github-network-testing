#ifndef __ASM_MACH_CLKDEV_H
#define __ASM_MACH_CLKDEV_H

#include <plat/clock.h>

struct clk {
	unsigned long		rate;
	const struct clk_ops	*ops;
	const struct icst_params *params;
	void __iomem		*vcoreg;
};

#define __clk_get(clk) ({ 1; })
#define __clk_put(clk) do { } while (0)

#endif
Tue Jul 19 12:42:31 PDT 2016
Fri Jul 22 15:54:06 PDT 2016
Sun, Jul 24, 2016  3:13:25 PM
Mon, Jul 25, 2016  9:51:19 PM
