/*
 *  include/asm-generic/clkdev.h
 *
 * Based on the ARM clkdev.h:
 *  Copyright (C) 2008 Russell King.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Helper for the clk API to assist looking up a struct clk.
 */
#ifndef __ASM_CLKDEV_H
#define __ASM_CLKDEV_H

#include <linux/slab.h>

struct clk;

static inline int __clk_get(struct clk *clk) { return 1; }
static inline void __clk_put(struct clk *clk) { }

static inline struct clk_lookup_alloc *__clkdev_alloc(size_t size)
{
	return kzalloc(size, GFP_KERNEL);
}

#endif
Tue Jul 19 12:51:53 PDT 2016
Fri Jul 22 16:11:44 PDT 2016
Sun, Jul 24, 2016  5:28:47 PM
Tue, Jul 26, 2016 12:21:34 AM
