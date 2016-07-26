#ifndef __SPARC_SPINLOCK_TYPES_H
#define __SPARC_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct {
	volatile unsigned char lock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0 }

#endif
Tue Jul 19 12:33:25 PDT 2016
Fri Jul 22 15:37:54 PDT 2016
Sun, Jul 24, 2016  1:14:48 PM
Mon, Jul 25, 2016  6:21:57 PM
Mon, Jul 25, 2016  7:35:11 PM
Tue, Jul 26, 2016  2:11:12 PM
