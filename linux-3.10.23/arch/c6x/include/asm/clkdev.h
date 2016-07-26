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
Tue Jul 19 12:49:33 PDT 2016
Fri Jul 22 16:07:15 PDT 2016
Sun, Jul 24, 2016  4:55:15 PM
Mon, Jul 25, 2016 11:44:37 PM
