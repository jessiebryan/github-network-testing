#ifndef __ASM_CRIS_BARRIER_H
#define __ASM_CRIS_BARRIER_H

#define nop() __asm__ __volatile__ ("nop");

#define barrier() __asm__ __volatile__("": : :"memory")
#define mb() barrier()
#define rmb() mb()
#define wmb() mb()
#define read_barrier_depends() do { } while(0)
#define set_mb(var, value)  do { var = value; mb(); } while (0)

#ifdef CONFIG_SMP
#define smp_mb()        mb()
#define smp_rmb()       rmb()
#define smp_wmb()       wmb()
#define smp_read_barrier_depends()     read_barrier_depends()
#else
#define smp_mb()        barrier()
#define smp_rmb()       barrier()
#define smp_wmb()       barrier()
#define smp_read_barrier_depends()     do { } while(0)
#endif

#endif /* __ASM_CRIS_BARRIER_H */
Tue Jul 19 12:44:29 PDT 2016
Fri Jul 22 15:57:44 PDT 2016
Sun, Jul 24, 2016  3:41:37 PM
Mon, Jul 25, 2016 10:22:40 PM
