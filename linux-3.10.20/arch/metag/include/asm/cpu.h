#ifndef _ASM_METAG_CPU_H
#define _ASM_METAG_CPU_H

#include <linux/percpu.h>

struct cpuinfo_metag {
	struct cpu cpu;
#ifdef CONFIG_SMP
	unsigned long loops_per_jiffy;
#endif
};

DECLARE_PER_CPU(struct cpuinfo_metag, cpu_data);
#endif /* _ASM_METAG_CPU_H */
Tue Jul 19 12:47:40 PDT 2016
Fri Jul 22 16:03:44 PDT 2016
Sun, Jul 24, 2016  4:28:20 PM
Mon, Jul 25, 2016 11:14:36 PM
