#ifndef _ASM_SCORE_CMPXCHG_H
#define _ASM_SCORE_CMPXCHG_H

#include <linux/irqflags.h>

struct __xchg_dummy { unsigned long a[100]; };
#define __xg(x) ((struct __xchg_dummy *)(x))

static inline
unsigned long __xchg(volatile unsigned long *m, unsigned long val)
{
	unsigned long retval;
	unsigned long flags;

	local_irq_save(flags);
	retval = *m;
	*m = val;
	local_irq_restore(flags);
	return retval;
}

#define xchg(ptr, v)						\
	((__typeof__(*(ptr))) __xchg((unsigned long *)(ptr),	\
					(unsigned long)(v)))

static inline unsigned long __cmpxchg(volatile unsigned long *m,
				unsigned long old, unsigned long new)
{
	unsigned long retval;
	unsigned long flags;

	local_irq_save(flags);
	retval = *m;
	if (retval == old)
		*m = new;
	local_irq_restore(flags);
	return retval;
}

#define cmpxchg(ptr, o, n)					\
	((__typeof__(*(ptr))) __cmpxchg((unsigned long *)(ptr),	\
					(unsigned long)(o),	\
					(unsigned long)(n)))

#define __HAVE_ARCH_CMPXCHG	1

#include <asm-generic/cmpxchg-local.h>

#endif /* _ASM_SCORE_CMPXCHG_H */
Tue Jul 19 12:43:58 PDT 2016
Fri Jul 22 15:56:45 PDT 2016
Sun, Jul 24, 2016  3:34:06 PM
Mon, Jul 25, 2016 10:14:20 PM
