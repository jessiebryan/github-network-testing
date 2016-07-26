/*
 * Copyright 2007-2009 Analog Devices Inc.
 *                         Philippe Gerum <rpm@xenomai.org>
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __ASM_BLACKFIN_CPU_H
#define __ASM_BLACKFIN_CPU_H

#include <linux/percpu.h>

struct blackfin_cpudata {
	struct cpu cpu;
	unsigned int imemctl;
	unsigned int dmemctl;
};

DECLARE_PER_CPU(struct blackfin_cpudata, cpu_data);

#endif
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:58 PDT 2016
Sun, Jul 24, 2016  1:37:24 PM
Mon, Jul 25, 2016  8:01:47 PM
Tue, Jul 26, 2016  2:36:20 PM
