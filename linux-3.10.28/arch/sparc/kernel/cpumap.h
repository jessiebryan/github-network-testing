#ifndef _CPUMAP_H
#define _CPUMAP_H

#ifdef CONFIG_SMP
extern void cpu_map_rebuild(void);
extern int  map_to_cpu(unsigned int index);
#define cpu_map_init() cpu_map_rebuild()
#else
#define cpu_map_init() do {} while (0)
static inline int map_to_cpu(unsigned int index)
{
	return raw_smp_processor_id();
}
#endif

#endif
Tue Jul 19 12:52:57 PDT 2016
Fri Jul 22 16:13:49 PDT 2016
Sun, Jul 24, 2016  5:44:06 PM
Tue, Jul 26, 2016 12:38:29 AM
