/*
 * arch/arm/mach-zynq/include/mach/clkdev.h
 *
 *  Copyright (C) 2011 Xilinx, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MACH_CLKDEV_H__
#define __MACH_CLKDEV_H__

#include <plat/clock.h>

struct clk {
	unsigned long		rate;
	const struct clk_ops	*ops;
	const struct icst_params *params;
	void __iomem		*vcoreg;
};

#define __clk_get(clk) ({ 1; })
#define __clk_put(clk) do { } while (0)

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:22 PM
Mon, Jul 25, 2016  6:19:03 PM
Mon, Jul 25, 2016  7:32:20 PM
Tue, Jul 26, 2016  2:08:32 PM
