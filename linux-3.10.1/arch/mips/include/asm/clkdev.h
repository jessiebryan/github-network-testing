/*
 *  based on arch/arm/include/asm/clkdev.h
 *
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

#define __clk_get(clk)	({ 1; })
#define __clk_put(clk)	do { } while (0)

static inline struct clk_lookup_alloc *__clkdev_alloc(size_t size)
{
	return kzalloc(size, GFP_KERNEL);
}

#endif
Tue Jul 19 12:38:34 PDT 2016
Fri Jul 22 15:46:40 PDT 2016
Sun, Jul 24, 2016  2:19:25 PM
Mon, Jul 25, 2016  8:50:41 PM
