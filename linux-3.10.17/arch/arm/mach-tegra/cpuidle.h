/*
 * Copyright (c) 2012, NVIDIA Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MACH_TEGRA_CPUIDLE_H
#define __MACH_TEGRA_CPUIDLE_H

#ifdef CONFIG_ARCH_TEGRA_2x_SOC
int tegra20_cpuidle_init(void);
#else
static inline int tegra20_cpuidle_init(void) { return -ENODEV; }
#endif

#ifdef CONFIG_ARCH_TEGRA_3x_SOC
int tegra30_cpuidle_init(void);
#else
static inline int tegra30_cpuidle_init(void) { return -ENODEV; }
#endif

#ifdef CONFIG_ARCH_TEGRA_114_SOC
int tegra114_cpuidle_init(void);
#else
static inline int tegra114_cpuidle_init(void) { return -ENODEV; }
#endif

#endif
Tue Jul 19 12:45:42 PDT 2016
Fri Jul 22 16:00:01 PDT 2016
Sun, Jul 24, 2016  3:59:31 PM
Mon, Jul 25, 2016 10:42:35 PM
