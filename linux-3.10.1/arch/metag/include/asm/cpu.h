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
Tue Jul 19 12:38:33 PDT 2016
Fri Jul 22 15:46:39 PDT 2016
Sun, Jul 24, 2016  2:19:17 PM
Mon, Jul 25, 2016  8:50:32 PM
