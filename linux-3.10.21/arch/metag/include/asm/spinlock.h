#ifndef __ASM_SPINLOCK_H
#define __ASM_SPINLOCK_H

#ifdef CONFIG_METAG_ATOMICITY_LOCK1
#include <asm/spinlock_lock1.h>
#else
#include <asm/spinlock_lnkget.h>
#endif

#define arch_spin_unlock_wait(lock) \
	do { while (arch_spin_is_locked(lock)) cpu_relax(); } while (0)

#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)

#define	arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define	arch_write_lock_flags(lock, flags) arch_write_lock(lock)

#define arch_spin_relax(lock)	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()

#endif /* __ASM_SPINLOCK_H */
Tue Jul 19 12:48:19 PDT 2016
Fri Jul 22 16:04:55 PDT 2016
Sun, Jul 24, 2016  4:37:35 PM
Mon, Jul 25, 2016 11:24:54 PM
