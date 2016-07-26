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
#ifdef CONFIG_SMP
	struct task_struct *idle;
#endif
};

DECLARE_PER_CPU(struct blackfin_cpudata, cpu_data);

#endif
Tue Jul 19 12:49:33 PDT 2016
Fri Jul 22 16:07:13 PDT 2016
Sun, Jul 24, 2016  4:55:07 PM
Mon, Jul 25, 2016 11:44:28 PM
