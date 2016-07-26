/*
 *  Copyright (C) 2010 Paul Mundt <lethal@linux-sh.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Helper for the clk API to assist looking up a struct clk.
 */

#ifndef __CLKDEV__H_
#define __CLKDEV__H_

#include <linux/bootmem.h>
#include <linux/mm.h>
#include <linux/slab.h>

#include <asm/clock.h>

static inline struct clk_lookup_alloc *__clkdev_alloc(size_t size)
{
	if (!slab_is_available())
		return alloc_bootmem_low_pages(size);
	else
		return kzalloc(size, GFP_KERNEL);
}

#define __clk_put(clk)
#define __clk_get(clk) ({ 1; })

#endif /* __CLKDEV_H__ */
Tue Jul 19 12:52:55 PDT 2016
Fri Jul 22 16:13:47 PDT 2016
Sun, Jul 24, 2016  5:43:46 PM
Tue, Jul 26, 2016 12:38:08 AM
