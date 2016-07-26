#ifndef __ASM_IRQ_H
#define __ASM_IRQ_H

#include <asm-generic/irq.h>

extern void (*handle_arch_irq)(struct pt_regs *);
extern void set_handle_irq(void (*handle_irq)(struct pt_regs *));

#endif
Tue Jul 19 12:48:52 PDT 2016
Fri Jul 22 16:05:59 PDT 2016
Sun, Jul 24, 2016  4:45:47 PM
Mon, Jul 25, 2016 11:34:02 PM
