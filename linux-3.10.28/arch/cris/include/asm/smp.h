#ifndef __ASM_SMP_H
#define __ASM_SMP_H

#include <linux/cpumask.h>

extern cpumask_t phys_cpu_present_map;

#define raw_smp_processor_id() (current_thread_info()->cpu)

#endif
Tue Jul 19 12:52:48 PDT 2016
Fri Jul 22 16:13:32 PDT 2016
Sun, Jul 24, 2016  5:42:00 PM
