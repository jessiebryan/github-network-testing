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
Tue Jul 19 12:41:03 PDT 2016
Fri Jul 22 15:51:35 PDT 2016
Sun, Jul 24, 2016  2:54:57 PM
Mon, Jul 25, 2016  9:30:28 PM
