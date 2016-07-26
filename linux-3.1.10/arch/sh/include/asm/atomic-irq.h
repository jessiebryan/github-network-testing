#ifndef __ASM_SH_ATOMIC_IRQ_H
#define __ASM_SH_ATOMIC_IRQ_H

/*
 * To get proper branch prediction for the main line, we must branch
 * forward to code at the end of this object's .text section, then
 * branch back to restart the operation.
 */
static inline void atomic_add(int i, atomic_t *v)
{
	unsigned long flags;

	raw_local_irq_save(flags);
	v->counter += i;
	raw_local_irq_restore(flags);
}

static inline void atomic_sub(int i, atomic_t *v)
{
	unsigned long flags;

	raw_local_irq_save(flags);
	v->counter -= i;
	raw_local_irq_restore(flags);
}

static inline int atomic_add_return(int i, atomic_t *v)
{
	unsigned long temp, flags;

	raw_local_irq_save(flags);
	temp = v->counter;
	temp += i;
	v->counter = temp;
	raw_local_irq_restore(flags);

	return temp;
}

static inline int atomic_sub_return(int i, atomic_t *v)
{
	unsigned long temp, flags;

	raw_local_irq_save(flags);
	temp = v->counter;
	temp -= i;
	v->counter = temp;
	raw_local_irq_restore(flags);

	return temp;
}

static inline void atomic_clear_mask(unsigned int mask, atomic_t *v)
{
	unsigned long flags;

	raw_local_irq_save(flags);
	v->counter &= ~mask;
	raw_local_irq_restore(flags);
}

static inline void atomic_set_mask(unsigned int mask, atomic_t *v)
{
	unsigned long flags;

	raw_local_irq_save(flags);
	v->counter |= mask;
	raw_local_irq_restore(flags);
}

#endif /* __ASM_SH_ATOMIC_IRQ_H */
Tue Jul 19 12:33:24 PDT 2016
Fri Jul 22 15:37:52 PDT 2016
Sun, Jul 24, 2016  1:14:30 PM
Mon, Jul 25, 2016  6:21:36 PM
Mon, Jul 25, 2016  7:34:50 PM
Tue, Jul 26, 2016  2:10:53 PM
