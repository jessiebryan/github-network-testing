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
Tue Jul 19 12:50:10 PDT 2016
Fri Jul 22 16:08:27 PDT 2016
Sun, Jul 24, 2016  5:04:29 PM
Mon, Jul 25, 2016 11:54:43 PM
