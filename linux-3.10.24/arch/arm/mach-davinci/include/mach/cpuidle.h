/*
 * TI DaVinci cpuidle platform support
 *
 * 2009 (C) Texas Instruments, Inc. http://www.ti.com/
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#ifndef _MACH_DAVINCI_CPUIDLE_H
#define _MACH_DAVINCI_CPUIDLE_H

struct davinci_cpuidle_config {
	u32 ddr2_pdown;
	void __iomem *ddr2_ctlr_base;
};

#endif
Tue Jul 19 12:50:08 PDT 2016
Fri Jul 22 16:08:21 PDT 2016
Sun, Jul 24, 2016  5:03:47 PM
Mon, Jul 25, 2016 11:53:57 PM
