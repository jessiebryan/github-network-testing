#ifndef __ASM_IDLE_H
#define __ASM_IDLE_H

#include <linux/linkage.h>

extern void (*cpu_wait)(void);
extern void r4k_wait(void);
extern asmlinkage void __r4k_wait(void);
extern void r4k_wait_irqoff(void);
extern void __pastwait(void);

static inline int using_rollback_handler(void)
{
	return cpu_wait == r4k_wait;
}

static inline int address_is_in_r4k_wait_irqoff(unsigned long addr)
{
	return addr >= (unsigned long)r4k_wait_irqoff &&
	       addr < (unsigned long)__pastwait;
}

#endif /* __ASM_IDLE_H  */
Tue Jul 19 12:53:30 PDT 2016
Fri Jul 22 16:14:53 PDT 2016
Sun, Jul 24, 2016  5:52:05 PM
Tue, Jul 26, 2016 12:47:18 AM
