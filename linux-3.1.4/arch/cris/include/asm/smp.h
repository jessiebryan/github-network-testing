#ifndef __ASM_SMP_H
#define __ASM_SMP_H

#include <linux/cpumask.h>

extern cpumask_t phys_cpu_present_map;

#define raw_smp_processor_id() (current_thread_info()->cpu)

#endif
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:00 PDT 2016
Sun, Jul 24, 2016  1:37:41 PM
Mon, Jul 25, 2016  8:02:07 PM
Tue, Jul 26, 2016  2:36:39 PM
