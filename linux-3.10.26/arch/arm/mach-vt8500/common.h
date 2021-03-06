/* linux/arch/arm/mach-vt8500/dt_common.h
 *
 * Copyright (C) 2012 Tony Prisk <linux@prisktech.co.nz>
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

#ifndef __ARCH_ARM_MACH_VT8500_DT_COMMON_H
#define __ARCH_ARM_MACH_VT8500_DT_COMMON_H

#include <linux/of.h>

/* defined in drivers/clk/clk-vt8500.c */
void __init vtwm_clk_init(void __iomem *pmc_base);

#endif
Tue Jul 19 12:51:28 PDT 2016
Fri Jul 22 16:10:54 PDT 2016
Sun, Jul 24, 2016  5:22:51 PM
Tue, Jul 26, 2016 12:15:01 AM
