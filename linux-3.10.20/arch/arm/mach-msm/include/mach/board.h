/* arch/arm/mach-msm/include/mach/board.h
 *
 * Copyright (C) 2007 Google, Inc.
 * Author: Brian Swetland <swetland@google.com>
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

#ifndef __ASM_ARCH_MSM_BOARD_H
#define __ASM_ARCH_MSM_BOARD_H

#include <linux/types.h>
#include <linux/platform_data/mmc-msm_sdcc.h>

/* platform device data structures */

struct clk_lookup;

/* common init routines for use by arch/arm/mach-msm/board-*.c */

void __init msm_add_devices(void);
void __init msm_init_irq(void);
void __init msm_init_gpio(void);
void __init msm_clock_init(struct clk_lookup *clock_tbl, unsigned num_clocks);
int __init msm_add_sdcc(unsigned int controller,
			struct msm_mmc_platform_data *plat,
			unsigned int stat_irq, unsigned long stat_irq_flags);

#if defined(CONFIG_MSM_SMD) && defined(CONFIG_DEBUG_FS)
int smd_debugfs_init(void);
#else
static inline int smd_debugfs_init(void) { return 0; }
#endif

#endif
Tue Jul 19 12:47:34 PDT 2016
Fri Jul 22 16:03:33 PDT 2016
Sun, Jul 24, 2016  4:26:54 PM
Mon, Jul 25, 2016 11:13:01 PM
