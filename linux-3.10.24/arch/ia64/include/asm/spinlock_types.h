#ifndef _ASM_IA64_SPINLOCK_TYPES_H
#define _ASM_IA64_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct {
	volatile unsigned int lock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile unsigned int read_counter	: 31;
	volatile unsigned int write_lock	:  1;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0, 0 }

#endif
Tue Jul 19 12:50:13 PDT 2016
Fri Jul 22 16:08:32 PDT 2016
Sun, Jul 24, 2016  5:05:06 PM
Mon, Jul 25, 2016 11:55:24 PM
