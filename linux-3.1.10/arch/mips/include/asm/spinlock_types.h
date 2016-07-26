#ifndef _ASM_SPINLOCK_TYPES_H
#define _ASM_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

#include <linux/types.h>

#include <asm/byteorder.h>

typedef union {
	/*
	 * bits  0..15 : serving_now
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
Tue Jul 19 12:33:21 PDT 2016
Fri Jul 22 15:37:47 PDT 2016
Sun, Jul 24, 2016  1:13:50 PM
Mon, Jul 25, 2016  6:20:48 PM
Mon, Jul 25, 2016  7:34:03 PM
Tue, Jul 26, 2016  2:10:09 PM
