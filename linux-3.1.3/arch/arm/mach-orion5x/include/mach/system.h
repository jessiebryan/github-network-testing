/*
 * arch/arm/mach-orion5x/include/mach/system.h
 *
 * Tzachi Perelstein <tzachi@marvell.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __ASM_ARCH_SYSTEM_H
#define __ASM_ARCH_SYSTEM_H

#include <mach/bridge-regs.h>

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	/*
	 * Enable and issue soft reset
	 */
	orion5x_setbits(RSTOUTn_MASK, (1 << 2));
	orion5x_setbits(CPU_SOFT_RESET, 1);
	mdelay(200);
	orion5x_clrbits(CPU_SOFT_RESET, 1);
}


#endif
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:33 PM
Mon, Jul 25, 2016  6:38:26 PM
Mon, Jul 25, 2016  7:51:19 PM
Tue, Jul 26, 2016  2:26:32 PM
