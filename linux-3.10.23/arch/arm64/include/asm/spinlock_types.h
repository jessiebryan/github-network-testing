/*
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_SPINLOCK_TYPES_H
#define __ASM_SPINLOCK_TYPES_H

#if !defined(__LINUX_SPINLOCK_TYPES_H) && !defined(__ASM_SPINLOCK_H)
# error "please don't include this file directly"
#endif

/* We only require natural alignment for exclusive accesses. */
#define __lock_aligned

typedef struct {
	volatile unsigned int lock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0 }

#endif
Tue Jul 19 12:49:32 PDT 2016
Fri Jul 22 16:07:12 PDT 2016
Sun, Jul 24, 2016  4:55:00 PM
Mon, Jul 25, 2016 11:44:20 PM
