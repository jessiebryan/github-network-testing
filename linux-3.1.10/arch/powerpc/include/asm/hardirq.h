#ifndef _ASM_POWERPC_HARDIRQ_H
#define _ASM_POWERPC_HARDIRQ_H

#include <linux/threads.h>
#include <linux/irq.h>

typedef struct {
	unsigned int __softirq_pending;
	unsigned int timer_irqs;
	unsigned int pmu_irqs;
	unsigned int mce_exceptions;
	unsigned int spurious_irqs;
} ____cacheline_aligned irq_cpustat_t;

DECLARE_PER_CPU_SHARED_ALIGNED(irq_cpustat_t, irq_stat);

#define __ARCH_IRQ_STAT

#define local_softirq_pending()	__get_cpu_var(irq_stat).__softirq_pending

static inline void ack_bad_irq(unsigned int irq)
{
	printk(KERN_CRIT "unexpected IRQ trap at vector %02x\n", irq);
}

extern u64 arch_irq_stat_cpu(unsigned int cpu);
#define arch_irq_stat_cpu	arch_irq_stat_cpu

#endif /* _ASM_POWERPC_HARDIRQ_H */
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:09 PM
Mon, Jul 25, 2016  6:21:11 PM
Mon, Jul 25, 2016  7:34:25 PM
Tue, Jul 26, 2016  2:10:29 PM
