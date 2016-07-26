#ifndef _ASM_SH_TOPOLOGY_H
#define _ASM_SH_TOPOLOGY_H

#ifdef CONFIG_NUMA

#define cpu_to_node(cpu)	((void)(cpu),0)
#define parent_node(node)	((void)(node),0)

#define cpumask_of_node(node)	((void)node, cpu_online_mask)

#define pcibus_to_node(bus)	((void)(bus), -1)
#define cpumask_of_pcibus(bus)	(pcibus_to_node(bus) == -1 ? \
					cpu_all_mask : \
					cpumask_of_node(pcibus_to_node(bus)))

#endif

#define mc_capable()    (1)

const struct cpumask *cpu_coregroup_mask(unsigned int cpu);

extern cpumask_t cpu_core_map[NR_CPUS];

#define topology_core_cpumask(cpu)	(&cpu_core_map[cpu])

#include <asm-generic/topology.h>

#endif /* _ASM_SH_TOPOLOGY_H */
Tue Jul 19 12:43:20 PDT 2016
Fri Jul 22 15:55:35 PDT 2016
Sun, Jul 24, 2016  3:25:01 PM
Mon, Jul 25, 2016 10:04:14 PM
