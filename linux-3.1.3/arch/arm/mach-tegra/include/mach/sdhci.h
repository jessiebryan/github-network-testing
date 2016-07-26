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
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:48 PM
Mon, Jul 25, 2016  6:38:44 PM
Mon, Jul 25, 2016  7:51:37 PM
