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
Tue Jul 19 12:40:35 PDT 2016
Fri Jul 22 15:50:40 PDT 2016
Sun, Jul 24, 2016  2:48:15 PM
Mon, Jul 25, 2016  9:22:55 PM
