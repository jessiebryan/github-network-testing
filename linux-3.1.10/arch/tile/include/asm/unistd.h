/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

#if !defined(_ASM_TILE_UNISTD_H) || defined(__SYSCALL)
#define _ASM_TILE_UNISTD_H

#if !defined(__LP64__) || defined(__SYSCALL_COMPAT)
/* Use the flavor of this syscall that matches the 32-bit API better. */
#define __ARCH_WANT_SYNC_FILE_RANGE2
#endif

/* Use the standard ABI for syscalls. */
#include <asm-generic/unistd.h>

/* Additional Tilera-specific syscalls. */
#define __NR_flush_cache	(__NR_arch_specific_syscall + 1)
__SYSCALL(__NR_flush_cache, sys_flush_cache)

#ifndef __tilegx__
/* "Fast" syscalls provide atomic support for 32-bit chips. */
#define __NR_FAST_cmpxchg	-1
#define __NR_FAST_atomic_update	-2
#define __NR_FAST_cmpxchg64	-3
#define __NR_cmpxchg_badaddr	(__NR_arch_specific_syscall + 0)
__SYSCALL(__NR_cmpxchg_badaddr, sys_cmpxchg_badaddr)
#endif

#ifdef __KERNEL__
/* In compat mode, we use sys_llseek() for compat_sys_llseek(). */
#ifdef CONFIG_COMPAT
#define __ARCH_WANT_SYS_LLSEEK
#endif
#define __ARCH_WANT_SYS_NEWFSTATAT
#endif

#endif /* _ASM_TILE_UNISTD_H */
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:55 PDT 2016
Sun, Jul 24, 2016  1:14:54 PM
Mon, Jul 25, 2016  6:22:05 PM
Mon, Jul 25, 2016  7:35:19 PM
Tue, Jul 26, 2016  2:11:19 PM
