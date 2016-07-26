/*
 * arch/arm/mach-tegra/include/mach/suspend.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@google.com>
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


#ifndef _MACH_TEGRA_SUSPEND_H_
#define _MACH_TEGRA_SUSPEND_H_

void tegra_pinmux_suspend(void);
void tegra_irq_suspend(void);
void tegra_gpio_suspend(void);
void tegra_clk_suspend(void);
void tegra_dma_suspend(void);
void tegra_timer_suspend(void);

void tegra_pinmux_resume(void);
void tegra_irq_resume(void);
void tegra_gpio_resume(void);
void tegra_clk_resume(void);
void tegra_dma_resume(void);
void tegra_timer_resume(void);

#endif /* _MACH_TEGRA_SUSPEND_H_ */
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:48 PM
Mon, Jul 25, 2016  6:38:44 PM
Mon, Jul 25, 2016  7:51:37 PM
Tue, Jul 26, 2016  2:26:49 PM
