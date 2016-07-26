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
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:36 PDT 2016
Sun, Jul 24, 2016  5:50:01 PM
Tue, Jul 26, 2016 12:44:58 AM
