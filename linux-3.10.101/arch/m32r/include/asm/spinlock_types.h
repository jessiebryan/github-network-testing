#ifndef _ASM_M32R_SPINLOCK_TYPES_H
#define _ASM_M32R_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct {
	volatile int slock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 1 }

typedef struct {
	volatile int lock;
} arch_rwlock_t;

#define RW_LOCK_BIAS			0x01000000
#define RW_LOCK_BIAS_STR		"0x01000000"

#define __ARCH_RW_LOCK_UNLOCKED		{ RW_LOCK_BIAS }

#endif /* _ASM_M32R_SPINLOCK_TYPES_H */
Tue Jul 19 12:40:28 PDT 2016
Fri Jul 22 15:50:28 PDT 2016
Sun, Jul 24, 2016  2:46:44 PM
Mon, Jul 25, 2016  9:21:10 PM
