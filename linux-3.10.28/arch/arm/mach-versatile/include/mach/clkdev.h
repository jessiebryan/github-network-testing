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
Tue Jul 19 12:52:46 PDT 2016
Fri Jul 22 16:13:27 PDT 2016
Sun, Jul 24, 2016  5:41:27 PM
Tue, Jul 26, 2016 12:35:33 AM
