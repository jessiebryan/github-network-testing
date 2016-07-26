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
Tue Jul 19 12:50:54 PDT 2016
Fri Jul 22 16:09:47 PDT 2016
Sun, Jul 24, 2016  5:14:39 PM
Tue, Jul 26, 2016 12:05:59 AM
