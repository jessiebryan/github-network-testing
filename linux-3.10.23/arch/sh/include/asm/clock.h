#ifndef __ASM_SH_CLOCK_H
#define __ASM_SH_CLOCK_H

#include <linux/sh_clk.h>

/* Should be defined by processor-specific code */
void __deprecated arch_init_clk_ops(struct sh_clk_ops **, int type);
int __init arch_clk_init(void);

/* arch/sh/kernel/cpu/clock-cpg.c */
int __init __deprecated cpg_clk_init(void);

/* arch/sh/kernel/cpu/clock.c */
int clk_init(void);

#endif /* __ASM_SH_CLOCK_H */
Tue Jul 19 12:49:41 PDT 2016
Fri Jul 22 16:07:30 PDT 2016
Sun, Jul 24, 2016  4:57:14 PM
Mon, Jul 25, 2016 11:46:48 PM
