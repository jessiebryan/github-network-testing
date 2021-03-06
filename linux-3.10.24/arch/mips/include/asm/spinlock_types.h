#ifndef _ASM_SPINLOCK_TYPES_H
#define _ASM_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

#include <linux/types.h>

#include <asm/byteorder.h>

typedef union {
	/*
	 * bits	 0..15 : serving_now
	 * bits 16..31 : ticket
	 */
	u32 lock;
	struct {
#ifdef __BIG_ENDIAN
		u16 ticket;
		u16 serving_now;
#else
		u16 serving_now;
		u16 ticket;
#endif
	} h;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ .lock = 0 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0 }

#endif
Tue Jul 19 12:50:16 PDT 2016
Fri Jul 22 16:08:38 PDT 2016
Sun, Jul 24, 2016  5:05:50 PM
Mon, Jul 25, 2016 11:56:14 PM
