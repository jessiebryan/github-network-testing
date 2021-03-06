/*
 * arch/arm/mach-tegra/board.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@google.com>
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

#ifndef __MACH_TEGRA_BOARD_H
#define __MACH_TEGRA_BOARD_H

#include <linux/types.h>

void tegra_assert_system_reset(char mode, const char *cmd);

void __init tegra_init_early(void);
void __init tegra_map_common_io(void);
void __init tegra_init_irq(void);
void __init tegra_init_clock(void);
int __init tegra_pcie_init(bool init_port0, bool init_port1);

extern struct sys_timer tegra_timer;
#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:17 PM
Mon, Jul 25, 2016  6:18:57 PM
Mon, Jul 25, 2016  7:32:14 PM
Tue, Jul 26, 2016  2:08:27 PM
