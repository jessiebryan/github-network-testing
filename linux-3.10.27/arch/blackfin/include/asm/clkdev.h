#ifndef __ASM_CLKDEV__H_
#define __ASM_CLKDEV__H_

#include <linux/slab.h>

static inline struct clk_lookup_alloc *__clkdev_alloc(size_t size)
{
	return kzalloc(size, GFP_KERNEL);
}

#define __clk_put(clk)
#define __clk_get(clk) ({ 1; })

#endif
Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:13 PDT 2016
Sun, Jul 24, 2016  5:32:23 PM
Tue, Jul 26, 2016 12:25:32 AM
