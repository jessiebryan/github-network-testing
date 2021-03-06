/*
 * arch/arm/mach-tegra/board-trimslice.h
 *
 * Copyright (C) 2011 CompuLab, Ltd.
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

#ifndef _MACH_TEGRA_BOARD_TRIMSLICE_H
#define _MACH_TEGRA_BOARD_TRIMSLICE_H

#define TRIMSLICE_GPIO_SD4_CD	TEGRA_GPIO_PP1	/* mmc4 cd */
#define TRIMSLICE_GPIO_SD4_WP	TEGRA_GPIO_PP2	/* mmc4 wp */

#define TRIMSLICE_GPIO_USB1_MODE	TEGRA_GPIO_PV2 /* USB1 mode */
#define TRIMSLICE_GPIO_USB2_RST		TEGRA_GPIO_PV0 /* USB2 PHY reset */

void trimslice_pinmux_init(void);

#endif
Tue Jul 19 12:36:40 PDT 2016
Fri Jul 22 15:43:09 PDT 2016
Sun, Jul 24, 2016  1:53:32 PM
Mon, Jul 25, 2016  8:20:48 PM
