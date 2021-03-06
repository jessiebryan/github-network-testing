#ifndef __BARRIER_H
#define __BARRIER_H

#include <asm/compiler.h>

#define mb() \
__asm__ __volatile__("mb": : :"memory")

#define rmb() \
__asm__ __volatile__("mb": : :"memory")

#define wmb() \
__asm__ __volatile__("wmb": : :"memory")

#define read_barrier_depends() \
__asm__ __volatile__("mb": : :"memory")

#ifdef CONFIG_SMP
#define __ASM_SMP_MB	"\tmb\n"
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_read_barrier_depends()	read_barrier_depends()
#else
#define __ASM_SMP_MB
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do { } while (0)
#endif

#define set_mb(var, value) \
do { var = value; mb(); } while (0)

#endif		/* __BARRIER_H */
Tue Jul 19 12:49:28 PDT 2016
Fri Jul 22 16:07:05 PDT 2016
Sun, Jul 24, 2016  4:54:07 PM
Mon, Jul 25, 2016 11:43:21 PM
