/*
 * Copyright (C) 2011 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@android.com>
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

#define TEGRA_EMC_NUM_REGS 46

struct tegra_emc_table {
	unsigned long rate;
	u32 regs[TEGRA_EMC_NUM_REGS];
};

int tegra_emc_set_rate(unsigned long rate);
long tegra_emc_round_rate(unsigned long rate);
void tegra_init_emc(const struct tegra_emc_table *table, int table_size);
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:48 PM
Mon, Jul 25, 2016  6:38:44 PM
Mon, Jul 25, 2016  7:51:37 PM
Tue, Jul 26, 2016  2:26:49 PM
