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
Tue Jul 19 12:35:40 PDT 2016
Fri Jul 22 15:41:11 PDT 2016
Sun, Jul 24, 2016  1:39:01 PM
Mon, Jul 25, 2016  8:03:41 PM
Tue, Jul 26, 2016  2:38:07 PM
