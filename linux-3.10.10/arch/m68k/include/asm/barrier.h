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
Tue Jul 19 12:39:11 PDT 2016
Fri Jul 22 15:47:54 PDT 2016
Sun, Jul 24, 2016  2:28:21 PM
Mon, Jul 25, 2016  9:00:39 PM
