/*
 * arch/arm/mach-kirkwood/include/mach/system.h
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
	 * Enable soft reset to assert RSTOUTn.
	 */
	writel(SOFT_RESET_OUT_EN, RSTOUTn_MASK);

	/*
	 * Assert soft reset.
	 */
	writel(SOFT_RESET, SYSTEM_SOFT_RESET);

	while (1)
		;
}


#endif
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:31 PDT 2016
Sun, Jul 24, 2016  1:11:51 PM
Mon, Jul 25, 2016  6:18:27 PM
Mon, Jul 25, 2016  7:31:44 PM
Tue, Jul 26, 2016  2:07:59 PM
