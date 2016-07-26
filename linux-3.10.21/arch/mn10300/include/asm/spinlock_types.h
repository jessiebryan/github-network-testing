#ifndef _ASM_SPINLOCK_TYPES_H
#define _ASM_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct arch_spinlock {
	unsigned int slock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ RW_LOCK_BIAS }

#endif /* _ASM_SPINLOCK_TYPES_H */
Tue Jul 19 12:48:21 PDT 2016
Fri Jul 22 16:05:00 PDT 2016
Sun, Jul 24, 2016  4:38:09 PM
Mon, Jul 25, 2016 11:25:32 PM
