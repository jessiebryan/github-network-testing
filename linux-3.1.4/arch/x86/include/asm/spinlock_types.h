#ifndef _ASM_X86_SPINLOCK_TYPES_H
#define _ASM_X86_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

typedef struct arch_spinlock {
	unsigned int slock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

#include <asm/rwlock.h>

#endif /* _ASM_X86_SPINLOCK_TYPES_H */
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:18 PDT 2016
Sun, Jul 24, 2016  1:39:57 PM
Mon, Jul 25, 2016  8:04:48 PM
