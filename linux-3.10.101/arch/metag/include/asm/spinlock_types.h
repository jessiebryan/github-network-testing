#ifndef _ASM_METAG_SPINLOCK_TYPES_H
#define _ASM_METAG_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct {
	volatile unsigned int lock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0 }

#endif /* _ASM_METAG_SPINLOCK_TYPES_H */
Tue Jul 19 12:40:29 PDT 2016
Fri Jul 22 15:50:29 PDT 2016
Sun, Jul 24, 2016  2:46:55 PM
