#ifndef __ASM_FPU_H
#define __ASM_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#define kernel_fpu_end() do { asm volatile("bar":::"memory"); preempt_enable(); } while(0)

#endif /* __ASM_FPU_H */
Tue Jul 19 12:41:06 PDT 2016
Fri Jul 22 15:51:41 PDT 2016
Sun, Jul 24, 2016  2:55:35 PM
Mon, Jul 25, 2016  9:31:11 PM
