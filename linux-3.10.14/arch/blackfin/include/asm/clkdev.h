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
Tue Jul 19 12:43:50 PDT 2016
Fri Jul 22 15:56:29 PDT 2016
Sun, Jul 24, 2016  3:32:05 PM
Mon, Jul 25, 2016 10:12:06 PM
