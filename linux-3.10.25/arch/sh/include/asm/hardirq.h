#ifndef __ASM_SH_HARDIRQ_H
#define __ASM_SH_HARDIRQ_H

#include <linux/threads.h>
#include <linux/irq.h>

typedef struct {
	unsigned int __softirq_pending;
	unsigned int __nmi_count;		/* arch dependent */
} ____cacheline_aligned irq_cpustat_t;

#include <linux/irq_cpustat.h>	/* Standard mappings for irq_cpustat_t above */

extern void ack_bad_irq(unsigned int irq);

#endif /* __ASM_SH_HARDIRQ_H */
Tue Jul 19 12:50:59 PDT 2016
Fri Jul 22 16:09:57 PDT 2016
Sun, Jul 24, 2016  5:15:52 PM
Tue, Jul 26, 2016 12:07:21 AM
