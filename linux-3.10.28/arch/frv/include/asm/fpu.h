#ifndef __ASM_FPU_H
#define __ASM_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#define kernel_fpu_end() do { asm volatile("bar":::"memory"); preempt_enable(); } while(0)

#endif /* __ASM_FPU_H */
Tue Jul 19 12:52:48 PDT 2016
Fri Jul 22 16:13:32 PDT 2016
Sun, Jul 24, 2016  5:42:03 PM
Tue, Jul 26, 2016 12:36:13 AM
