/*
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (c) 2001-2008 Silicon Graphics, Inc.  All rights reserved.
 */

#ifndef _ASM_IA64_SN_MSPEC_H
#define _ASM_IA64_SN_MSPEC_H

#define FETCHOP_VAR_SIZE 64 /* 64 byte per fetchop variable */

#define FETCHOP_LOAD		0
#define FETCHOP_INCREMENT	8
#define FETCHOP_DECREMENT	16
#define FETCHOP_CLEAR		24

#define FETCHOP_STORE		0
#define FETCHOP_AND		24
#define FETCHOP_OR		32

#define FETCHOP_CLEAR_CACHE	56

#define FETCHOP_LOAD_OP(addr, op) ( \
         *(volatile long *)((char*) (addr) + (op)))

#define FETCHOP_STORE_OP(addr, op, x) ( \
         *(volatile long *)((char*) (addr) + (op)) = (long) (x))

#ifdef __KERNEL__

/*
 * Each Atomic Memory Operation (amo, formerly known as fetchop)
 * variable is 64 bytes long.  The first 8 bytes are used.  The
 * remaining 56 bytes are unaddressable due to the operation taking
 * that portion of the address.
 *
 * NOTE: The amo structure _MUST_ be placed in either the first or second
 * half of the cache line.  The cache line _MUST NOT_ be used for anything
 * other than additional amo entries.  This is because there are two
 * addresses which reference the same physical cache line.  One will
 * be a cached entry with the memory type bits all set.  This address
 * may be loaded into processor cache.  The amo will be referenced
 * uncached via the memory special memory type.  If any portion of the
 * cached cache-line is modified, when that line is flushed, it will
 * overwrite the uncached value in physical memory and lead to
 * inconsistency.
 */
struct amo {
        u64 variable;
        u64 unused[7];
};


#endif /* __KERNEL__ */

#endif /* _ASM_IA64_SN_MSPEC_H */
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:41 PDT 2016
Sun, Jul 24, 2016  1:13:10 PM
Mon, Jul 25, 2016  6:20:01 PM
Mon, Jul 25, 2016  7:33:16 PM
Tue, Jul 26, 2016  2:09:25 PM
