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
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:51 PDT 2016
Sun, Jul 24, 2016  5:51:47 PM
Tue, Jul 26, 2016 12:46:58 AM
