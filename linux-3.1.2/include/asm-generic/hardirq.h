#ifndef __ASM_GENERIC_HARDIRQ_H
#define __ASM_GENERIC_HARDIRQ_H

#include <linux/cache.h>
#include <linux/threads.h>

typedef struct {
	unsigned int __softirq_pending;
} ____cacheline_aligned irq_cpustat_t;

#include <linux/irq_cpustat.h>	/* Standard mappings for irq_cpustat_t above */
#include <linux/irq.h>

#ifndef ack_bad_irq
static inline void ack_bad_irq(unsigned int irq)
{
	printk(KERN_CRIT "unexpected IRQ trap at vector %02x\n", irq);
}
#endif

#endif /* __ASM_GENERIC_HARDIRQ_H */
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:00 PM
Mon, Jul 25, 2016  6:35:23 PM
Mon, Jul 25, 2016  7:48:20 PM
Tue, Jul 26, 2016  2:23:43 PM
