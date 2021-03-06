#ifndef _ASM_IA64_CPU_H_
#define _ASM_IA64_CPU_H_

#include <linux/device.h>
#include <linux/cpu.h>
#include <linux/topology.h>
#include <linux/percpu.h>

struct ia64_cpu {
	struct cpu cpu;
};

DECLARE_PER_CPU(struct ia64_cpu, cpu_devices);

DECLARE_PER_CPU(int, cpu_state);

#ifdef CONFIG_HOTPLUG_CPU
extern int arch_register_cpu(int num);
extern void arch_unregister_cpu(int);
#endif

#endif /* _ASM_IA64_CPU_H_ */
Tue Jul 19 12:53:28 PDT 2016
Fri Jul 22 16:14:49 PDT 2016
Sun, Jul 24, 2016  5:51:33 PM
Tue, Jul 26, 2016 12:46:43 AM
