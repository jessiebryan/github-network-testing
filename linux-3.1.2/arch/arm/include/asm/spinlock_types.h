#ifndef __ASM_SPINLOCK_TYPES_H
#define __ASM_SPINLOCK_TYPES_H

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
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:51 PM
Mon, Jul 25, 2016  6:28:01 PM
Mon, Jul 25, 2016  7:41:08 PM
Tue, Jul 26, 2016  2:16:52 PM
