/*
 * Copyright 2011 Tilera Corporation. All Rights Reserved.
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

#ifndef _ASM_TILE_CACHECTL_H
#define _ASM_TILE_CACHECTL_H

/*
 * Options for cacheflush system call.
 *
 * The ICACHE flush is performed on all cores currently running the
 * current process's address space.  The intent is for user
 * applications to be able to modify code, invoke the system call,
 * then allow arbitrary other threads in the same address space to see
 * the newly-modified code.  Passing a length of CHIP_L1I_CACHE_SIZE()
 * or more invalidates the entire icache on all cores in the address
 * spaces.  (Note: currently this option invalidates the entire icache
 * regardless of the requested address and length, but we may choose
 * to honor the arguments at some point.)
 *
 * Flush and invalidation of memory can normally be performed with the
 * __insn_flush(), __insn_inv(), and __insn_finv() instructions from
 * userspace.  The DCACHE option to the system call allows userspace
 * to flush the entire L1+L2 data cache from the core.  In this case,
 * the address and length arguments are not used.  The DCACHE flush is
 * restricted to the current core, not all cores in the address space.
 */
#define	ICACHE	(1<<0)		/* invalidate L1 instruction cache */
#define	DCACHE	(1<<1)		/* flush and invalidate data cache */
#define	BCACHE	(ICACHE|DCACHE)	/* flush both caches               */

#endif	/* _ASM_TILE_CACHECTL_H */
Tue Jul 19 12:46:30 PDT 2016
Fri Jul 22 16:01:33 PDT 2016
Sun, Jul 24, 2016  4:11:29 PM
Mon, Jul 25, 2016 10:55:55 PM
