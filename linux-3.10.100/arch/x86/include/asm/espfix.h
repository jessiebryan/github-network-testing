#ifndef _ASM_X86_ESPFIX_H
#define _ASM_X86_ESPFIX_H

#ifdef CONFIG_X86_64

#include <asm/percpu.h>

DECLARE_PER_CPU_READ_MOSTLY(unsigned long, espfix_stack);
DECLARE_PER_CPU_READ_MOSTLY(unsigned long, espfix_waddr);

extern void init_espfix_bsp(void);
extern void init_espfix_ap(void);

#endif /* CONFIG_X86_64 */

#endif /* _ASM_X86_ESPFIX_H */
Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:28 PDT 2016
Sun, Jul 24, 2016  2:39:27 PM
Mon, Jul 25, 2016  9:13:00 PM
