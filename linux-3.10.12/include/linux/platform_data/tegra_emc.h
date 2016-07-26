/*
 * Copyright (C) 2011 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@android.com>
 *	Olof Johansson <olof@lixom.net>
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

#ifndef __TEGRA_EMC_H_
#define __TEGRA_EMC_H_

#define TEGRA_EMC_NUM_REGS 46

struct tegra_emc_table {
	unsigned long rate;
	u32 regs[TEGRA_EMC_NUM_REGS];
};

struct tegra_emc_pdata {
	int num_tables;
	struct tegra_emc_table *tables;
};

#endif
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:58 PDT 2016
Sun, Jul 24, 2016  3:20:11 PM
Mon, Jul 25, 2016  9:58:52 PM
