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
Tue Jul 19 12:44:37 PDT 2016
Fri Jul 22 15:57:57 PDT 2016
Sun, Jul 24, 2016  3:43:25 PM
Mon, Jul 25, 2016 10:24:42 PM
