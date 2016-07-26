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
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:46 PDT 2016
Sun, Jul 24, 2016  1:21:20 PM
Mon, Jul 25, 2016  6:29:48 PM
Mon, Jul 25, 2016  7:42:52 PM
Tue, Jul 26, 2016  2:18:34 PM
