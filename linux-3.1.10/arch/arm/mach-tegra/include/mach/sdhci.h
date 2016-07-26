/*
 * include/asm-arm/arch-tegra/include/mach/sdhci.h
 *
 * Copyright (C) 2009 Palm, Inc.
 * Author: Yvonne Yip <y@palm.com>
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
#ifndef __ASM_ARM_ARCH_TEGRA_SDHCI_H
#define __ASM_ARM_ARCH_TEGRA_SDHCI_H

#include <linux/mmc/host.h>

struct tegra_sdhci_platform_data {
	int cd_gpio;
	int wp_gpio;
	int power_gpio;
	int is_8bit;
	int pm_flags;
};

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:18 PM
Mon, Jul 25, 2016  6:18:58 PM
Mon, Jul 25, 2016  7:32:15 PM
