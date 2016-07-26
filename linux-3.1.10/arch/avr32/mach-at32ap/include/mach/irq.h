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
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:37 PDT 2016
Sun, Jul 24, 2016  1:12:38 PM
Mon, Jul 25, 2016  6:19:22 PM
Mon, Jul 25, 2016  7:32:38 PM
Tue, Jul 26, 2016  2:08:50 PM
