#ifndef _ASM_POWERPC_SPINLOCK_TYPES_H
#define _ASM_POWERPC_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct {
	volatile unsigned int slock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile signed int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0 }

#endif
Tue Jul 19 12:41:54 PDT 2016
Fri Jul 22 15:53:10 PDT 2016
Sun, Jul 24, 2016  3:06:14 PM
Mon, Jul 25, 2016  9:43:11 PM
