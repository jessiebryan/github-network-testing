#ifndef _H8300_BARRIER_H
#define _H8300_BARRIER_H

#define nop()  asm volatile ("nop"::)

/*
 * Force strict CPU ordering.
 * Not really required on H8...
 */
#define mb()   asm volatile (""   : : :"memory")
#define rmb()  asm volatile (""   : : :"memory")
#define wmb()  asm volatile (""   : : :"memory")
#define set_mb(var, value) do { xchg(&var, value); } while (0)

#ifdef CONFIG_SMP
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_read_barrier_depends()	read_barrier_depends()
#else
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do { } while(0)
#endif

#endif /* _H8300_BARRIER_H */
Tue Jul 19 12:50:12 PDT 2016
Fri Jul 22 16:08:30 PDT 2016
Sun, Jul 24, 2016  5:04:54 PM
Mon, Jul 25, 2016 11:55:12 PM
