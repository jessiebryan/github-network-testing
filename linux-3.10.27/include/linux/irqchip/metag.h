/*
 * Copyright (C) 2011 Imagination Technologies
 */

#ifndef _LINUX_IRQCHIP_METAG_H_
#define _LINUX_IRQCHIP_METAG_H_

#include <linux/errno.h>

#ifdef CONFIG_METAG_PERFCOUNTER_IRQS
extern int init_internal_IRQ(void);
extern int internal_irq_map(unsigned int hw);
#else
static inline int init_internal_IRQ(void)
{
	return 0;
}
static inline int internal_irq_map(unsigned int hw)
{
	return -EINVAL;
}
#endif

#endif /* _LINUX_IRQCHIP_METAG_H_ */
Tue Jul 19 12:52:34 PDT 2016
Fri Jul 22 16:13:03 PDT 2016
Sun, Jul 24, 2016  5:38:34 PM
Tue, Jul 26, 2016 12:32:22 AM
