/* arch/arm/mach-msm/include/mach/system.h
 *
 * Copyright (C) 2007 Google, Inc.
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

#include <mach/hardware.h>

void arch_idle(void);

static inline void arch_reset(char mode, const char *cmd)
{
	for (;;) ;  /* depends on IPC w/ other core */
}

/* low level hardware reset hook -- for example, hitting the
 * PSHOLD line on the PMIC to hard reset the system
 */
extern void (*msm_hw_reset_hook)(void);
Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:37 PDT 2016
Sun, Jul 24, 2016  1:20:10 PM
Mon, Jul 25, 2016  6:28:23 PM
Mon, Jul 25, 2016  7:41:30 PM
Tue, Jul 26, 2016  2:17:14 PM
