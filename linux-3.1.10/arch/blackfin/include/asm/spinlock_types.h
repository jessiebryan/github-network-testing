/*
 * Copyright 2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef __ASM_SPINLOCK_TYPES_H
#define __ASM_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

#include <asm/rwlock.h>

typedef struct {
	volatile unsigned int lock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ RW_LOCK_BIAS }

#endif
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:37 PDT 2016
Sun, Jul 24, 2016  1:12:41 PM
Mon, Jul 25, 2016  6:19:26 PM
Mon, Jul 25, 2016  7:32:42 PM
Tue, Jul 26, 2016  2:08:53 PM
