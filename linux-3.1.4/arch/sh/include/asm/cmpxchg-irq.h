#ifndef __ASM_SH_CMPXCHG_IRQ_H
#define __ASM_SH_CMPXCHG_IRQ_H

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

#endif /* __ASM_SH_CMPXCHG_IRQ_H */
Tue Jul 19 12:35:41 PDT 2016
Fri Jul 22 15:41:13 PDT 2016
Sun, Jul 24, 2016  1:39:16 PM
Mon, Jul 25, 2016  8:03:59 PM
Tue, Jul 26, 2016  2:38:24 PM
