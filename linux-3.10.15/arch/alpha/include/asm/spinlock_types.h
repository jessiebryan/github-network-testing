#ifndef _ALPHA_SPINLOCK_TYPES_H
#define _ALPHA_SPINLOCK_TYPES_H

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

#endif
Tue Jul 19 12:44:24 PDT 2016
Fri Jul 22 15:57:34 PDT 2016
Sun, Jul 24, 2016  3:40:23 PM
