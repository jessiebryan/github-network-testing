/*
 * arch/arm/mach-tegra/include/mach/clk.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Erik Gilling <konkers@google.com>
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

#ifndef __MACH_CLK_H
#define __MACH_CLK_H

struct clk;

void tegra_periph_reset_deassert(struct clk *c);
void tegra_periph_reset_assert(struct clk *c);

unsigned long clk_get_rate_all_locked(struct clk *c);
void tegra_sdmmc_tap_delay(struct clk *c, int delay);

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:17 PM
Mon, Jul 25, 2016  6:18:57 PM
