/*
 * arch/arm/plat-spear/include/plat/system.h
 *
 * SPEAr platform specific architecture functions
 *
 * Copyright (C) 2009 ST Microelectronics
 * Viresh Kumar<viresh.kumar@st.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_SYSTEM_H
#define __PLAT_SYSTEM_H

#include <linux/io.h>
#include <asm/hardware/sp810.h>
#include <mach/hardware.h>

static inline void arch_idle(void)
{
	/*
	 * This should do all the clock switching
	 * and wait for interrupt tricks
	 */
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	if (mode == 's') {
		/* software reset, Jump into ROM at address 0 */
		cpu_reset(0);
	} else {
		/* hardware reset, Use on-chip reset capability */
		sysctl_soft_reset((void __iomem *)VA_SPEAR_SYS_CTRL_BASE);
	}
}

#endif /* __PLAT_SYSTEM_H */
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:57 PDT 2016
Sun, Jul 24, 2016  1:37:18 PM
Mon, Jul 25, 2016  8:01:39 PM
Tue, Jul 26, 2016  2:36:13 PM
