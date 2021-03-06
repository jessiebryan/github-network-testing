/*
 *
 *  Copyright (C) 1999 ARM Limited
 *  Copyright (C) 2000 Deep Blue Solutions Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <mach/csp/chipcHw_inline.h>

extern int bcmring_arch_warm_reboot;

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	printk("arch_reset:%c %x\n", mode, bcmring_arch_warm_reboot);

	if (mode == 'h') {
		/* Reboot configured in proc entry */
		if (bcmring_arch_warm_reboot) {
			printk("warm reset\n");
			/* Issue Warm reset (do not reset ethernet switch, keep alive) */
			chipcHw_reset(chipcHw_REG_SOFT_RESET_CHIP_WARM);
		} else {
			/* Force reset of everything */
			printk("force reset\n");
			chipcHw_reset(chipcHw_REG_SOFT_RESET_CHIP_SOFT);
		}
	} else {
		/* Force reset of everything */
		printk("force reset\n");
		chipcHw_reset(chipcHw_REG_SOFT_RESET_CHIP_SOFT);
	}
}

#endif
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:56 PM
Mon, Jul 25, 2016  6:28:07 PM
Mon, Jul 25, 2016  7:41:13 PM
Tue, Jul 26, 2016  2:16:58 PM
