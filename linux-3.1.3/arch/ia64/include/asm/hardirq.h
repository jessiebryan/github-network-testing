#ifndef _ASM_IA64_HARDIRQ_H
#define _ASM_IA64_HARDIRQ_H

/*
 * Modified 1998-2002, 2004 Hewlett-Packard Co
 *	David Mosberger-Tang <davidm@hpl.hp.com>
 */

/*
 * No irq_cpustat_t for IA-64.  The data is held in the per-CPU data structure.
 */

#define __ARCH_IRQ_STAT	1

#define local_softirq_pending()		(local_cpu_data->softirq_pending)

#include <linux/threads.h>
#include <linux/irq.h>

#include <asm/processor.h>

extern void __iomem *ipi_base_addr;

void ack_bad_irq(unsigned int irq);

#endif /* _ASM_IA64_HARDIRQ_H */
Tue Jul 19 12:34:47 PDT 2016
Fri Jul 22 15:39:52 PDT 2016
Sun, Jul 24, 2016  1:29:37 PM
Mon, Jul 25, 2016  6:39:42 PM
Mon, Jul 25, 2016  7:52:34 PM
Tue, Jul 26, 2016  2:27:43 PM
