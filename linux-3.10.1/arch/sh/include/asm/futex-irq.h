#ifndef __ASM_SH_FUTEX_IRQ_H
#define __ASM_SH_FUTEX_IRQ_H


static inline int atomic_futex_op_xchg_set(int oparg, u32 __user *uaddr,
					   int *oldval)
{
	unsigned long flags;
	int ret;

	local_irq_save(flags);

	ret = get_user(*oldval, uaddr);
	if (!ret)
		ret = put_user(oparg, uaddr);

	local_irq_restore(flags);

	return ret;
}

static inline int atomic_futex_op_xchg_add(int oparg, u32 __user *uaddr,
					   int *oldval)
{
	unsigned long flags;
	int ret;

	local_irq_save(flags);

	ret = get_user(*oldval, uaddr);
	if (!ret)
		ret = put_user(*oldval + oparg, uaddr);

	local_irq_restore(flags);

	return ret;
}

static inline int atomic_futex_op_xchg_or(int oparg, u32 __user *uaddr,
					  int *oldval)
{
	unsigned long flags;
	int ret;

	local_irq_save(flags);

	ret = get_user(*oldval, uaddr);
	if (!ret)
		ret = put_user(*oldval | oparg, uaddr);

	local_irq_restore(flags);

	return ret;
}

static inline int atomic_futex_op_xchg_and(int oparg, u32 __user *uaddr,
					   int *oldval)
{
	unsigned long flags;
	int ret;

	local_irq_save(flags);

	ret = get_user(*oldval, uaddr);
	if (!ret)
		ret = put_user(*oldval & oparg, uaddr);

	local_irq_restore(flags);

	return ret;
}

static inline int atomic_futex_op_xchg_xor(int oparg, u32 __user *uaddr,
					   int *oldval)
{
	unsigned long flags;
	int ret;

	local_irq_save(flags);

	ret = get_user(*oldval, uaddr);
	if (!ret)
		ret = put_user(*oldval ^ oparg, uaddr);

	local_irq_restore(flags);

	return ret;
}

static inline int atomic_futex_op_cmpxchg_inatomic(u32 *uval,
						   u32 __user *uaddr,
						   u32 oldval, u32 newval)
{
	unsigned long flags;
	int ret;
	u32 prev = 0;

	local_irq_save(flags);

	ret = get_user(prev, uaddr);
	if (!ret && oldval == prev)
		ret = put_user(newval, uaddr);

	local_irq_restore(flags);

	*uval = prev;
	return ret;
}

#endif /* __ASM_SH_FUTEX_IRQ_H */
Tue Jul 19 12:38:38 PDT 2016
Fri Jul 22 15:46:49 PDT 2016
Sun, Jul 24, 2016  2:20:29 PM
Mon, Jul 25, 2016  8:51:53 PM
