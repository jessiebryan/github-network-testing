#ifndef __ASM_FPU_H
#define __ASM_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#define kernel_fpu_end() do { asm volatile("bar":::"memory"); preempt_enable(); } while(0)

#endif /* __ASM_FPU_H */
Tue Jul 19 12:49:34 PDT 2016
Fri Jul 22 16:07:17 PDT 2016
Sun, Jul 24, 2016  4:55:29 PM
Mon, Jul 25, 2016 11:44:52 PM
