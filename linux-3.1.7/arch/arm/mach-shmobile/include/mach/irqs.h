#ifndef __ASM_MACH_IRQS_H
#define __ASM_MACH_IRQS_H

#define NR_IRQS         1024

/* GIC */
#define gic_spi(nr)		((nr) + 32)

/* INTCA */
#define evt2irq(evt)		(((evt) >> 5) - 16)
#define irq2evt(irq)		(((irq) + 16) << 5)

/* INTCS */
#define INTCS_VECT_BASE		0x2200
#define INTCS_VECT(n, vect)	INTC_VECT((n), INTCS_VECT_BASE + (vect))
#define intcs_evt2irq(evt)	evt2irq(INTCS_VECT_BASE + (evt))

#endif /* __ASM_MACH_IRQS_H */
Tue Jul 19 12:36:40 PDT 2016
Fri Jul 22 15:43:08 PDT 2016
Sun, Jul 24, 2016  1:53:30 PM
Mon, Jul 25, 2016  8:20:46 PM
