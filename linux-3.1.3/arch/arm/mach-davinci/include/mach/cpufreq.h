/*
 * TI DaVinci CPUFreq platform support.
 *
 * Copyright (C) 2009 Texas Instruments, Inc. http://www.ti.com/
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef _MACH_DAVINCI_CPUFREQ_H
#define _MACH_DAVINCI_CPUFREQ_H

#include <linux/cpufreq.h>

struct davinci_cpufreq_config {
	struct cpufreq_frequency_table *freq_table;
	int (*set_voltage) (unsigned int index);
	int (*init) (void);
};

#endif
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:40 PDT 2016
Sun, Jul 24, 2016  1:28:13 PM
Mon, Jul 25, 2016  6:38:02 PM
Mon, Jul 25, 2016  7:50:56 PM
Tue, Jul 26, 2016  2:26:10 PM
