#ifndef __ASM_METAG_CMPXCHG_LOCK1_H
#define __ASM_METAG_CMPXCHG_LOCK1_H

#include <asm/global_lock.h>

/* Use LOCK2 as these have to be atomic w.r.t. ordinary accesses. */

static inline unsigned long xchg_u32(volatile u32 *m, unsigned long val)
{
	unsigned long flags, retval;

	__global_lock2(flags);
	fence();
	retval = *m;
	*m = val;
	__global_unlock2(flags);
	return retval;
}

static inline unsigned long xchg_u8(volatile u8 *m, unsigned long val)
{
	unsigned long flags, retval;

	__global_lock2(flags);
	fence();
	retval = *m;
	*m = val & 0xff;
	__global_unlock2(flags);
	return retval;
}

static inline unsigned long __cmpxchg_u32(volatile int *m, unsigned long old,
					  unsigned long new)
{
	__u32 retval;
	unsigned long flags;

	__global_lock2(flags);
	retval = *m;
	if (retval == old) {
		fence();
		*m = new;
	}
	__global_unlock2(flags);
	return retval;
}

#endif /* __ASM_METAG_CMPXCHG_LOCK1_H */
Tue Jul 19 12:47:02 PDT 2016
Fri Jul 22 16:02:32 PDT 2016
Sun, Jul 24, 2016  4:19:04 PM
Mon, Jul 25, 2016 11:04:22 PM
