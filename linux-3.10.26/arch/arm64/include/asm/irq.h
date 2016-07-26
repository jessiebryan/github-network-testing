#ifndef __ASM_IRQ_H
#define __ASM_IRQ_H

#include <asm-generic/irq.h>

extern void (*handle_arch_irq)(struct pt_regs *);
extern void set_handle_irq(void (*handle_irq)(struct pt_regs *));

#endif
Tue Jul 19 12:51:29 PDT 2016
Fri Jul 22 16:10:55 PDT 2016
Sun, Jul 24, 2016  5:22:56 PM
Tue, Jul 26, 2016 12:15:07 AM
