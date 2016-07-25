/* arch/arm/mach-zynq/include/mach/system.h
 *
 *  Copyright (C) 2011 Xilinx
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MACH_SYSTEM_H__
#define __MACH_SYSTEM_H__

static inline void arch_idle(void)
{
	cpu_do_idle();
}

static inline void arch_reset(char mode, const char *cmd)
{
	/* Add architecture specific reset processing here */
}

#endif
Tue Jul 19 12:37:54 PDT 2016
Fri Jul 22 15:45:23 PDT 2016
Sun, Jul 24, 2016  2:10:06 PM
