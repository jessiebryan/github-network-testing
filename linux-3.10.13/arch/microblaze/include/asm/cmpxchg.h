#ifndef _ASM_MICROBLAZE_CMPXCHG_H
#define _ASM_MICROBLAZE_CMPXCHG_H

#include <linux/irqflags.h>

void __bad_xchg(volatile void *ptr, int size);

static inline unsigned long __xchg(unsigned long x, volatile void *ptr,
								int size)
{
	unsigned long ret;
	unsigned long flags;

	switch (size) {
	case 1:
		local_irq_save(flags);
		ret = *(volatile unsigned char *)ptr;
		*(volatile unsigned char *)ptr = x;
		local_irq_restore(flags);
		break;

	case 4:
		local_irq_save(flags);
		ret = *(volatile unsigned long *)ptr;
		*(volatile unsigned long *)ptr = x;
		local_irq_restore(flags);
		break;
	default:
		__bad_xchg(ptr, size), ret = 0;
		break;
	}

	return ret;
}

#define xchg(ptr, x) \
	((__typeof__(*(ptr))) __xchg((unsigned long)(x), (ptr), sizeof(*(ptr))))

#include <asm-generic/cmpxchg.h>
#include <asm-generic/cmpxchg-local.h>

#endif /* _ASM_MICROBLAZE_CMPXCHG_H */
Tue Jul 19 12:43:15 PDT 2016
Fri Jul 22 15:55:25 PDT 2016
Sun, Jul 24, 2016  3:23:48 PM
Mon, Jul 25, 2016 10:02:52 PM
