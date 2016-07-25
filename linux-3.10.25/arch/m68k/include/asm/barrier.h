#ifndef _M68K_BARRIER_H
#define _M68K_BARRIER_H

/*
 * Force strict CPU ordering.
 * Not really required on m68k...
 */
#define nop()		do { asm volatile ("nop"); barrier(); } while (0)
#define mb()		barrier()
#define rmb()		barrier()
#define wmb()		barrier()
#define read_barrier_depends()	((void)0)
#define set_mb(var, value)	({ (var) = (value); wmb(); })

#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	((void)0)

#endif /* _M68K_BARRIER_H */
Tue Jul 19 12:50:53 PDT 2016
Fri Jul 22 16:09:46 PDT 2016
Sun, Jul 24, 2016  5:14:32 PM
