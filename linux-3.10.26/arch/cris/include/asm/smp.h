#ifndef __ASM_SMP_H
#define __ASM_SMP_H

#include <linux/cpumask.h>

extern cpumask_t phys_cpu_present_map;

#define raw_smp_processor_id() (current_thread_info()->cpu)

#endif
Tue Jul 19 12:51:31 PDT 2016
Fri Jul 22 16:10:59 PDT 2016
Sun, Jul 24, 2016  5:23:23 PM
Tue, Jul 26, 2016 12:15:37 AM
