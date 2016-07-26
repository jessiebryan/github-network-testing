#ifndef __ASM_IRQ_H
#define __ASM_IRQ_H

#include <asm-generic/irq.h>

extern void (*handle_arch_irq)(struct pt_regs *);
extern void set_handle_irq(void (*handle_irq)(struct pt_regs *));

#endif
Tue Jul 19 12:46:19 PDT 2016
Fri Jul 22 16:01:11 PDT 2016
Sun, Jul 24, 2016  4:08:51 PM
Mon, Jul 25, 2016 10:52:58 PM
