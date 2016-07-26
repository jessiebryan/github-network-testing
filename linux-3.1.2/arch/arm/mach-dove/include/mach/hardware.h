/*
 * arch/arm/mach-dove/include/mach/hardware.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __ASM_ARCH_HARDWARE_H
#define __ASM_ARCH_HARDWARE_H

#include "dove.h"

/* Macros below are required for compatibility with PXA AC'97 driver.	*/
#define __REG(x)	(*((volatile u32 *)((x) - DOVE_SB_REGS_PHYS_BASE + \
				DOVE_SB_REGS_VIRT_BASE)))
#define __PREG(x)	(((u32)&(x)) - DOVE_SB_REGS_VIRT_BASE + \
		DOVE_SB_REGS_PHYS_BASE)
#endif
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:58 PM
Mon, Jul 25, 2016  6:28:10 PM
Mon, Jul 25, 2016  7:41:16 PM
Tue, Jul 26, 2016  2:17:01 PM
