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
Tue Jul 19 12:41:50 PDT 2016
Fri Jul 22 15:53:03 PDT 2016
Sun, Jul 24, 2016  3:05:21 PM
Mon, Jul 25, 2016  9:42:12 PM
