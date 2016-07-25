#ifndef _ALPHA_HARDIRQ_H
#define _ALPHA_HARDIRQ_H

void ack_bad_irq(unsigned int irq);
#define ack_bad_irq ack_bad_irq

#include <asm-generic/hardirq.h>

#endif /* _ALPHA_HARDIRQ_H */
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:47 PDT 2016
Sun, Jul 24, 2016  1:36:12 PM
