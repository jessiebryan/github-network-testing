#ifndef __ASM_SH_SPINLOCK_TYPES_H
#define __ASM_SH_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct {
	volatile unsigned int lock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED		{ 1 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define RW_LOCK_BIAS			0x01000000
#define __ARCH_RW_LOCK_UNLOCKED		{ RW_LOCK_BIAS }

#endif
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:50 PM
Mon, Jul 25, 2016  6:31:35 PM
Mon, Jul 25, 2016  7:44:38 PM
Tue, Jul 26, 2016  2:20:14 PM
