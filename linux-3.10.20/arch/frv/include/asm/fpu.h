#ifndef __ASM_FPU_H
#define __ASM_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#define kernel_fpu_end() do { asm volatile("bar":::"memory"); preempt_enable(); } while(0)

#endif /* __ASM_FPU_H */
Tue Jul 19 12:47:38 PDT 2016
Fri Jul 22 16:03:40 PDT 2016
Sun, Jul 24, 2016  4:27:48 PM
Mon, Jul 25, 2016 11:14:02 PM
