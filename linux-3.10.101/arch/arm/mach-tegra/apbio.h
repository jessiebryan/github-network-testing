/*
 * Copyright (C) 2010 NVIDIA Corporation.
 * Copyright (C) 2010 Google, Inc.
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

#ifndef __MACH_TEGRA_APBIO_H
#define __MACH_TEGRA_APBIO_H

void tegra_apb_io_init(void);
u32 tegra_apb_readl(unsigned long offset);
void tegra_apb_writel(u32 value, unsigned long offset);
#endif
Tue Jul 19 12:40:24 PDT 2016
Fri Jul 22 15:50:20 PDT 2016
Sun, Jul 24, 2016  2:45:46 PM
Mon, Jul 25, 2016  9:20:03 PM
