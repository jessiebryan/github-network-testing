/*
 *  arch/arm/include/asm/cpu.h
 *
 *  Copyright (C) 2004-2005 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_ARM_CPU_H
#define __ASM_ARM_CPU_H

#include <linux/percpu.h>
#include <linux/cpu.h>

struct cpuinfo_arm {
	struct cpu	cpu;
	u32		cpuid;
#ifdef CONFIG_SMP
	unsigned int	loops_per_jiffy;
#endif
};

DECLARE_PER_CPU(struct cpuinfo_arm, cpu_data);

#endif
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:24 PDT 2016
Sun, Jul 24, 2016  2:17:33 PM
Mon, Jul 25, 2016  8:48:35 PM
