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
Tue Jul 19 12:46:29 PDT 2016
Fri Jul 22 16:01:32 PDT 2016
Sun, Jul 24, 2016  4:11:19 PM
Mon, Jul 25, 2016 10:55:44 PM
