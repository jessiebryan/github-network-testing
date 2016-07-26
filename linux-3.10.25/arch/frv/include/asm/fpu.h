#ifndef __ASM_FPU_H
#define __ASM_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#define kernel_fpu_end() do { asm volatile("bar":::"memory"); preempt_enable(); } while(0)

#endif /* __ASM_FPU_H */
Tue Jul 19 12:50:51 PDT 2016
Fri Jul 22 16:09:43 PDT 2016
Sun, Jul 24, 2016  5:14:07 PM
Tue, Jul 26, 2016 12:05:23 AM
