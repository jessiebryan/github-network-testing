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
Tue Jul 19 12:36:42 PDT 2016
Fri Jul 22 15:43:11 PDT 2016
Sun, Jul 24, 2016  1:53:54 PM
Mon, Jul 25, 2016  8:21:14 PM
