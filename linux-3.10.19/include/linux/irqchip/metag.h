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
Tue Jul 19 12:47:24 PDT 2016
Fri Jul 22 16:03:12 PDT 2016
Sun, Jul 24, 2016  4:24:21 PM
Mon, Jul 25, 2016 11:10:11 PM
