#ifndef __ASM_MACH_IRQS_H
#define __ASM_MACH_IRQS_H

#include <linux/sh_intc.h>

/* GIC */
#define gic_spi(nr)		((nr) + 32)
#define gic_iid(nr)		(nr) /* ICCIAR / interrupt ID */

/* INTCS */
#define INTCS_VECT_BASE		0x3400
#define INTCS_VECT(n, vect)	INTC_VECT((n), INTCS_VECT_BASE + (vect))
#define intcs_evt2irq(evt)	evt2irq(INTCS_VECT_BASE + (evt))

/* External IRQ pins */
#define IRQPIN_BASE		2000
#define irq_pin(nr)		((nr) + IRQPIN_BASE)

#endif /* __ASM_MACH_IRQS_H */
Tue Jul 19 12:53:24 PDT 2016
Fri Jul 22 16:14:42 PDT 2016
Sun, Jul 24, 2016  5:50:44 PM
