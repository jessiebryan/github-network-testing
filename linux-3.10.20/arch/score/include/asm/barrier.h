#ifndef _ASM_SCORE_BARRIER_H
#define _ASM_SCORE_BARRIER_H

#define mb()		barrier()
#define rmb()		barrier()
#define wmb()		barrier()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()

#define read_barrier_depends()		do {} while (0)
#define smp_read_barrier_depends()	do {} while (0)

#define set_mb(var, value) 		do {var = value; wmb(); } while (0)

#endif /* _ASM_SCORE_BARRIER_H */
Tue Jul 19 12:47:45 PDT 2016
Fri Jul 22 16:03:52 PDT 2016
Sun, Jul 24, 2016  4:29:27 PM
Mon, Jul 25, 2016 11:15:52 PM
