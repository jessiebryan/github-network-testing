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
Tue Jul 19 12:35:30 PDT 2016
Fri Jul 22 15:40:50 PDT 2016
Sun, Jul 24, 2016  1:36:41 PM
Mon, Jul 25, 2016  8:00:55 PM
