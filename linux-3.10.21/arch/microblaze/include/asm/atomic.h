#ifndef _ASM_MICROBLAZE_ATOMIC_H
#define _ASM_MICROBLAZE_ATOMIC_H

#include <asm/cmpxchg.h>
#include <asm-generic/atomic.h>
#include <asm-generic/atomic64.h>

/*
 * Atomically test *v and decrement if it is greater than 0.
 * The function returns the old value of *v minus 1.
 */
static inline int atomic_dec_if_positive(atomic_t *v)
{
	unsigned long flags;
	int res;

	local_irq_save(flags);
	res = v->counter - 1;
	if (res >= 0)
		v->counter = res;
	local_irq_restore(flags);

	return res;
}
#define atomic_dec_if_positive atomic_dec_if_positive

#endif /* _ASM_MICROBLAZE_ATOMIC_H */
Tue Jul 19 12:48:19 PDT 2016
Fri Jul 22 16:04:55 PDT 2016
Sun, Jul 24, 2016  4:37:36 PM
Mon, Jul 25, 2016 11:24:55 PM
