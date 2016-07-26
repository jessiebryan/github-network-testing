#ifndef _ASM_CLKDEV_H
#define _ASM_CLKDEV_H

#include <linux/slab.h>

struct clk;

static inline int __clk_get(struct clk *clk)
{
	return 1;
}

static inline void __clk_put(struct clk *clk)
{
}

static inline struct clk_lookup_alloc *__clkdev_alloc(size_t size)
{
	return kzalloc(size, GFP_KERNEL);
}

#endif /* _ASM_CLKDEV_H */
Tue Jul 19 12:41:46 PDT 2016
Fri Jul 22 15:52:57 PDT 2016
Sun, Jul 24, 2016  3:04:35 PM
Mon, Jul 25, 2016  9:41:19 PM
