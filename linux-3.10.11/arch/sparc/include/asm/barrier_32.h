#ifndef __SPARC_BARRIER_H
#define __SPARC_BARRIER_H

/* XXX Change this if we ever use a PSO mode kernel. */
#define mb()	__asm__ __volatile__ ("" : : : "memory")
#define rmb()	mb()
#define wmb()	mb()
#define read_barrier_depends()	do { } while(0)
#define set_mb(__var, __value)  do { __var = __value; mb(); } while(0)
#define smp_mb()	__asm__ __volatile__("":::"memory")
#define smp_rmb()	__asm__ __volatile__("":::"memory")
#define smp_wmb()	__asm__ __volatile__("":::"memory")
#define smp_read_barrier_depends()	do { } while(0)

#endif /* !(__SPARC_BARRIER_H) */
Tue Jul 19 12:41:57 PDT 2016
Fri Jul 22 15:53:14 PDT 2016
Sun, Jul 24, 2016  3:06:41 PM
Mon, Jul 25, 2016  9:43:42 PM
