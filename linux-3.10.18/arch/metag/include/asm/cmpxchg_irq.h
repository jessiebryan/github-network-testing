#ifndef __ASM_METAG_CMPXCHG_IRQ_H
#define __ASM_METAG_CMPXCHG_IRQ_H

#include <linux/irqflags.h>

static inline unsigned long xchg_u32(volatile u32 *m, unsigned long val)
{
	unsigned long flags, retval;

	local_irq_save(flags);
	retval = *m;
	*m = val;
	local_irq_restore(flags);
	return retval;
}

static inline unsigned long xchg_u8(volatile u8 *m, unsigned long val)
{
	unsigned long flags, retval;

	local_irq_save(flags);
	retval = *m;
	*m = val & 0xff;
	local_irq_restore(flags);
	return retval;
}

static inline unsigned long __cmpxchg_u32(volatile int *m, unsigned long old,
					  unsigned long new)
{
	__u32 retval;
	unsigned long flags;

	local_irq_save(flags);
	retval = *m;
	if (retval == old)
		*m = new;
	local_irq_restore(flags);       /* implies memory barrier  */
	return retval;
}

#endif /* __ASM_METAG_CMPXCHG_IRQ_H */
Tue Jul 19 12:46:23 PDT 2016
Fri Jul 22 16:01:20 PDT 2016
Sun, Jul 24, 2016  4:09:52 PM
Mon, Jul 25, 2016 10:54:06 PM
