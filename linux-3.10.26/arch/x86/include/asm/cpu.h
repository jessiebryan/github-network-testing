#ifndef _ASM_X86_CPU_H
#define _ASM_X86_CPU_H

#include <linux/device.h>
#include <linux/cpu.h>
#include <linux/topology.h>
#include <linux/nodemask.h>
#include <linux/percpu.h>

#ifdef CONFIG_SMP

extern void prefill_possible_map(void);

#else /* CONFIG_SMP */

static inline void prefill_possible_map(void) {}

#define cpu_physical_id(cpu)			boot_cpu_physical_apicid
#define safe_smp_processor_id()			0
#define stack_smp_processor_id()		0

#endif /* CONFIG_SMP */

struct x86_cpu {
	struct cpu cpu;
};

#ifdef CONFIG_HOTPLUG_CPU
extern int arch_register_cpu(int num);
extern void arch_unregister_cpu(int);
extern void __cpuinit start_cpu0(void);
#ifdef CONFIG_DEBUG_HOTPLUG_CPU0
extern int _debug_hotplug_cpu(int cpu, int action);
#endif
#endif

DECLARE_PER_CPU(int, cpu_state);

int mwait_usable(const struct cpuinfo_x86 *);

#endif /* _ASM_X86_CPU_H */
Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:17 PDT 2016
Sun, Jul 24, 2016  5:25:43 PM
Tue, Jul 26, 2016 12:18:12 AM
