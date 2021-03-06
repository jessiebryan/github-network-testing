/* cpudata.h: Per-cpu parameters.
 *
 * Copyright (C) 2004 Keith M Wesolowski (wesolows@foobazco.org)
 *
 * Based on include/asm/cpudata.h and Linux 2.4 smp.h
 * both (C) David S. Miller.
 */

#ifndef _SPARC_CPUDATA_H
#define _SPARC_CPUDATA_H

#include <linux/percpu.h>

typedef struct {
	unsigned long udelay_val;
	unsigned long clock_tick;
	unsigned int multiplier;
	unsigned int counter;
#ifdef CONFIG_SMP
	unsigned int irq_resched_count;
	unsigned int irq_call_count;
#endif
	int prom_node;
	int mid;
	int next;
} cpuinfo_sparc;

DECLARE_PER_CPU(cpuinfo_sparc, __cpu_data);
#define cpu_data(__cpu) per_cpu(__cpu_data, (__cpu))
#define local_cpu_data() __get_cpu_var(__cpu_data)

#endif /* _SPARC_CPUDATA_H */
Tue Jul 19 12:33:25 PDT 2016
Fri Jul 22 15:37:54 PDT 2016
Sun, Jul 24, 2016  1:14:41 PM
Mon, Jul 25, 2016  6:21:50 PM
Mon, Jul 25, 2016  7:35:03 PM
Tue, Jul 26, 2016  2:11:05 PM
