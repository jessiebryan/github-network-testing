#ifndef __MACH_SUNXI_CLK_FACTORS_H
#define __MACH_SUNXI_CLK_FACTORS_H

#include <linux/clk-provider.h>
#include <linux/clkdev.h>

#define SUNXI_FACTORS_NOT_APPLICABLE	(0)

struct clk_factors_config {
	u8 nshift;
	u8 nwidth;
	u8 kshift;
	u8 kwidth;
	u8 mshift;
	u8 mwidth;
	u8 pshift;
	u8 pwidth;
};

struct clk *clk_register_factors(struct device *dev, const char *name,
				 const char *parent_name,
				 unsigned long flags, void __iomem *reg,
				 struct clk_factors_config *config,
				 void (*get_factors) (u32 *rate, u32 parent_rate,
						      u8 *n, u8 *k, u8 *m, u8 *p),
				 spinlock_t *lock);
#endif
Tue Jul 19 12:42:01 PDT 2016
Fri Jul 22 15:53:19 PDT 2016
Sun, Jul 24, 2016  3:07:29 PM
Mon, Jul 25, 2016  9:44:36 PM
