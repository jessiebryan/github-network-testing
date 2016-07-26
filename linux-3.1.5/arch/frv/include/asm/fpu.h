#ifndef __ASM_FPU_H
#define __ASM_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#define kernel_fpu_end() do { asm volatile("bar":::"memory"); preempt_enable(); } while(0)

#endif /* __ASM_FPU_H */
Tue Jul 19 12:36:09 PDT 2016
Fri Jul 22 15:42:06 PDT 2016
Sun, Jul 24, 2016  1:45:58 PM
Mon, Jul 25, 2016  8:11:54 PM
