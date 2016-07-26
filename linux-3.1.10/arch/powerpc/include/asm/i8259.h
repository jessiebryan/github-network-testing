#ifndef _ASM_POWERPC_I8259_H
#define _ASM_POWERPC_I8259_H
#ifdef __KERNEL__

#include <linux/irq.h>

extern void i8259_init(struct device_node *node, unsigned long intack_addr);
extern unsigned int i8259_irq(void);
extern struct irq_host *i8259_get_host(void);

#endif /* __KERNEL__ */
#endif /* _ASM_POWERPC_I8259_H */
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:09 PM
Mon, Jul 25, 2016  6:21:11 PM
Mon, Jul 25, 2016  7:34:26 PM
Tue, Jul 26, 2016  2:10:30 PM
