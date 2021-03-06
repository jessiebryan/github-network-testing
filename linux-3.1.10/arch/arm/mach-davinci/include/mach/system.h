/*
 * DaVinci system defines
 *
 * Author: Kevin Hilman, MontaVista Software, Inc. <source@mvista.com>
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <mach/common.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	if (davinci_soc_info.reset)
		davinci_soc_info.reset(davinci_soc_info.reset_device);
}

#endif /* __ASM_ARCH_SYSTEM_H */
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:30 PDT 2016
Sun, Jul 24, 2016  1:11:43 PM
Mon, Jul 25, 2016  6:18:17 PM
Mon, Jul 25, 2016  7:31:35 PM
Tue, Jul 26, 2016  2:07:50 PM
