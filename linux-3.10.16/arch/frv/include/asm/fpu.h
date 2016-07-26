#ifndef __ASM_FPU_H
#define __ASM_FPU_H


/*
 * MAX floating point unit state size (FSAVE/FRESTORE)
 */

#define kernel_fpu_end() do { asm volatile("bar":::"memory"); preempt_enable(); } while(0)

#endif /* __ASM_FPU_H */
Tue Jul 19 12:45:08 PDT 2016
Fri Jul 22 15:58:55 PDT 2016
Sun, Jul 24, 2016  3:50:54 PM
Mon, Jul 25, 2016 10:33:02 PM
