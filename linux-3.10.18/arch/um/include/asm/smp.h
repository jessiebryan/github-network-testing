#ifndef __UM_SMP_H
#define __UM_SMP_H

#ifdef CONFIG_SMP

#include <linux/bitops.h>
#include <asm/current.h>
#include <linux/cpumask.h>

#define raw_smp_processor_id() (current_thread->cpu)

#define cpu_logical_map(n) (n)
#define cpu_number_map(n) (n)
extern int hard_smp_processor_id(void);
#define NO_PROC_ID -1

extern int ncpus;


static inline void smp_cpus_done(unsigned int maxcpus)
{
}

extern struct task_struct *idle_threads[NR_CPUS];

#else

#define hard_smp_processor_id()		0

#endif

#endif
Tue Jul 19 12:46:30 PDT 2016
Fri Jul 22 16:01:33 PDT 2016
Sun, Jul 24, 2016  4:11:30 PM
Mon, Jul 25, 2016 10:55:57 PM
