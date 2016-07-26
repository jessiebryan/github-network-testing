#ifndef __ASM_AVR32_ARCH_IRQ_H
#define __ASM_AVR32_ARCH_IRQ_H

#define EIM_IRQ_BASE	NR_INTERNAL_IRQS
#define NR_EIM_IRQS	32
#define AT32_EXTINT(n)	(EIM_IRQ_BASE + (n))

#define GPIO_IRQ_BASE	(EIM_IRQ_BASE + NR_EIM_IRQS)
#define NR_GPIO_CTLR	(5 /*internal*/ + 1 /*external*/)
#define NR_GPIO_IRQS	(NR_GPIO_CTLR * 32)

#define NR_IRQS		(GPIO_IRQ_BASE + NR_GPIO_IRQS)

#endif /* __ASM_AVR32_ARCH_IRQ_H */
Tue Jul 19 12:38:29 PDT 2016
Fri Jul 22 15:46:31 PDT 2016
Sun, Jul 24, 2016  2:18:23 PM
Mon, Jul 25, 2016  8:49:31 PM
