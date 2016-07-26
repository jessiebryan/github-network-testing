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
Tue Jul 19 12:48:53 PDT 2016
Fri Jul 22 16:06:01 PDT 2016
Sun, Jul 24, 2016  4:46:03 PM
Mon, Jul 25, 2016 11:34:20 PM
