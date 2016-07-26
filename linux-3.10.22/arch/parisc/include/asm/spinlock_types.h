#ifndef __ASM_SPINLOCK_TYPES_H
#define __ASM_SPINLOCK_TYPES_H

typedef struct {
#ifdef CONFIG_PA20
	volatile unsigned int slock;
# define __ARCH_SPIN_LOCK_UNLOCKED { 1 }
#else
	volatile unsigned int lock[4];
# define __ARCH_SPIN_LOCK_UNLOCKED	{ { 1, 1, 1, 1 } }
#endif
} arch_spinlock_t;

typedef struct {
	arch_spinlock_t lock;
	volatile int counter;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ __ARCH_SPIN_LOCK_UNLOCKED, 0 }

#endif
Tue Jul 19 12:49:00 PDT 2016
Fri Jul 22 16:06:14 PDT 2016
Sun, Jul 24, 2016  4:47:31 PM
Mon, Jul 25, 2016 11:35:58 PM
