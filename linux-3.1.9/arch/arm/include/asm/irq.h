#ifndef __ASM_ARM_IRQ_H
#define __ASM_ARM_IRQ_H

#include <mach/irqs.h>

#ifndef irq_canonicalize
#define irq_canonicalize(i)	(i)
#endif

#define NR_IRQS_LEGACY	16

/*
 * Use this value to indicate lack of interrupt
 * capability
 */
#ifndef NO_IRQ
#define NO_IRQ	((unsigned int)(-1))
#endif

#ifndef __ASSEMBLY__
struct irqaction;
struct pt_regs;
extern void migrate_irqs(void);

extern void asm_do_IRQ(unsigned int, struct pt_regs *);
void handle_IRQ(unsigned int, struct pt_regs *);
void init_IRQ(void);

#endif

#endif

Tue Jul 19 12:37:50 PDT 2016
Fri Jul 22 15:45:16 PDT 2016
Sun, Jul 24, 2016  2:09:18 PM
Mon, Jul 25, 2016  8:39:27 PM
