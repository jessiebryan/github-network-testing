#ifndef _ASM_POWERPC_I8259_H
#define _ASM_POWERPC_I8259_H
#ifdef __KERNEL__

#include <linux/irq.h>

extern void i8259_init(struct device_node *node, unsigned long intack_addr);
extern unsigned int i8259_irq(void);
extern struct irq_domain *i8259_get_host(void);

#endif /* __KERNEL__ */
#endif /* _ASM_POWERPC_I8259_H */
Tue Jul 19 12:51:36 PDT 2016
Fri Jul 22 16:11:10 PDT 2016
Sun, Jul 24, 2016  5:24:47 PM
Tue, Jul 26, 2016 12:17:10 AM
