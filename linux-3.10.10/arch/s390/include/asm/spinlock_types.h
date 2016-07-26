#ifndef __ASM_SPINLOCK_TYPES_H
#define __ASM_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct {
	volatile unsigned int owner_cpu;
} __attribute__ ((aligned (4))) arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0 }

#endif
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:05 PDT 2016
Sun, Jul 24, 2016  2:29:33 PM
Mon, Jul 25, 2016  9:01:59 PM
