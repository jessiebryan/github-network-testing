#ifndef __ASM_SMP_H
#define __ASM_SMP_H

#include <linux/cpumask.h>

extern cpumask_t phys_cpu_present_map;

#define raw_smp_processor_id() (current_thread_info()->cpu)

#endif
Tue Jul 19 12:43:51 PDT 2016
Fri Jul 22 15:56:31 PDT 2016
Sun, Jul 24, 2016  3:32:24 PM
Mon, Jul 25, 2016 10:12:27 PM
