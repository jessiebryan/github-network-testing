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
Tue Jul 19 12:33:52 PDT 2016
Fri Jul 22 15:38:40 PDT 2016
Sun, Jul 24, 2016  1:20:34 PM
Mon, Jul 25, 2016  6:28:53 PM
Mon, Jul 25, 2016  7:41:59 PM
Tue, Jul 26, 2016  2:17:42 PM
