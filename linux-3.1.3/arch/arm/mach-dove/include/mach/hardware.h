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
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:40 PDT 2016
Sun, Jul 24, 2016  1:28:14 PM
Mon, Jul 25, 2016  6:38:04 PM
Mon, Jul 25, 2016  7:50:57 PM
Tue, Jul 26, 2016  2:26:11 PM
