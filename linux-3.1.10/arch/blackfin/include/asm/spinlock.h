/*
 * Copyright 2004-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __BFIN_SPINLOCK_H
#define __BFIN_SPINLOCK_H

#ifndef CONFIG_SMP
# include <asm-generic/spinlock.h>
#else

#include <linux/atomic.h>

asmlinkage int __raw_spin_is_locked_asm(volatile int *ptr);
asmlinkage void __raw_spin_lock_asm(volatile int *ptr);
asmlinkage int __raw_spin_trylock_asm(volatile int *ptr);
asmlinkage void __raw_spin_unlock_asm(volatile int *ptr);
asmlinkage void __raw_read_lock_asm(volatile int *ptr);
asmlinkage int __raw_read_trylock_asm(volatile int *ptr);
asmlinkage void __raw_read_unlock_asm(volatile int *ptr);
asmlinkage void __raw_write_lock_asm(volatile int *ptr);
asmlinkage int __raw_write_trylock_asm(volatile int *ptr);
asmlinkage void __raw_write_unlock_asm(volatile int *ptr);

static inline int arch_spin_is_locked(arch_spinlock_t *lock)
{
	return __raw_spin_is_locked_asm(&lock->lock);
}

static inline void arch_spin_lock(arch_spinlock_t *lock)
{
	__raw_spin_lock_asm(&lock->lock);
}

#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)

static inline int arch_spin_trylock(arch_spinlock_t *lock)
{
	return __raw_spin_trylock_asm(&lock->lock);
}

static inline void arch_spin_unlock(arch_spinlock_t *lock)
{
	__raw_spin_unlock_asm(&lock->lock);
}

static inline void arch_spin_unlock_wait(arch_spinlock_t *lock)
{
	while (arch_spin_is_locked(lock))
		cpu_relax();
}

static inline int arch_read_can_lock(arch_rwlock_t *rw)
{
	return __raw_uncached_fetch_asm(&rw->lock) > 0;
}

static inline int arch_write_can_lock(arch_rwlock_t *rw)
{
	return __raw_uncached_fetch_asm(&rw->lock) == RW_LOCK_BIAS;
}

static inline void arch_read_lock(arch_rwlock_t *rw)
{
	__raw_read_lock_asm(&rw->lock);
}

#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)

static inline int arch_read_trylock(arch_rwlock_t *rw)
{
	return __raw_read_trylock_asm(&rw->lock);
}

static inline void arch_read_unlock(arch_rwlock_t *rw)
{
	__raw_read_unlock_asm(&rw->lock);
}

static inline void arch_write_lock(arch_rwlock_t *rw)
{
	__raw_write_lock_asm(&rw->lock);
}

#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)

static inline int arch_write_trylock(arch_rwlock_t *rw)
{
	return __raw_write_trylock_asm(&rw->lock);
}

static inline void arch_write_unlock(arch_rwlock_t *rw)
{
	__raw_write_unlock_asm(&rw->lock);
}

#define arch_spin_relax(lock)  	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()

#endif

#endif /*  !__BFIN_SPINLOCK_H */
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:37 PDT 2016
Sun, Jul 24, 2016  1:12:41 PM
Mon, Jul 25, 2016  6:19:26 PM
Mon, Jul 25, 2016  7:32:42 PM
Tue, Jul 26, 2016  2:08:53 PM
