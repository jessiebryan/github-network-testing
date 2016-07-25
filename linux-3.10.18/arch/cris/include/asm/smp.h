#ifndef __ASM_SMP_H
#define __ASM_SMP_H

#include <linux/cpumask.h>

extern cpumask_t phys_cpu_present_map;

#define raw_smp_processor_id() (current_thread_info()->cpu)

#endif
Tue Jul 19 12:46:21 PDT 2016
Fri Jul 22 16:01:15 PDT 2016
Sun, Jul 24, 2016  4:09:18 PM
