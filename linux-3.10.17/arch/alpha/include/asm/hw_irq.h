#ifndef _ALPHA_HW_IRQ_H
#define _ALPHA_HW_IRQ_H


extern volatile unsigned long irq_err_count;
DECLARE_PER_CPU(unsigned long, irq_pmi_count);

#ifdef CONFIG_ALPHA_GENERIC
#define ACTUAL_NR_IRQS	alpha_mv.nr_irqs
#else
#define ACTUAL_NR_IRQS	NR_IRQS
#endif

#endif
Tue Jul 19 12:45:39 PDT 2016
Fri Jul 22 15:59:55 PDT 2016
Sun, Jul 24, 2016  3:58:47 PM
Mon, Jul 25, 2016 10:41:47 PM
