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
Tue Jul 19 12:46:58 PDT 2016
Fri Jul 22 16:02:23 PDT 2016
Sun, Jul 24, 2016  4:17:56 PM
Mon, Jul 25, 2016 11:03:06 PM
