/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1999 by Kaz Kojima
 *
 * Defitions for the address spaces of the SH CPUs.
 */
#ifndef __ASM_SH_ADDRSPACE_H
#define __ASM_SH_ADDRSPACE_H

#ifdef __KERNEL__

#include <cpu/addrspace.h>

/* If this CPU supports segmentation, hook up the helpers */
#ifdef P1SEG

/*
   [ P0/U0 (virtual) ]		0x00000000     <------ User space
   [ P1 (fixed)   cached ]	0x80000000     <------ Kernel space
   [ P2 (fixed)  non-cachable]	0xA0000000     <------ Physical access
   [ P3 (virtual) cached]	0xC0000000     <------ vmalloced area
   [ P4 control   ]		0xE0000000
 */

/* Returns the privileged segment base of a given address  */
#define PXSEG(a)	(((unsigned long)(a)) & 0xe0000000)

#ifdef CONFIG_29BIT
/*
 * Map an address to a certain privileged segment
 */
#define P1SEGADDR(a)	\
	((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P1SEG))
#define P2SEGADDR(a)	\
	((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P2SEG))
#define P3SEGADDR(a)	\
	((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P3SEG))
#define P4SEGADDR(a)	\
	((__typeof__(a))(((unsigned long)(a) & 0x1fffffff) | P4SEG))
#else
/*
 * These will never work in 32-bit, don't even bother.
 */
#define P1SEGADDR(a)	({ (void)(a); BUG(); NULL; })
#define P2SEGADDR(a)	({ (void)(a); BUG(); NULL; })
#define P3SEGADDR(a)	({ (void)(a); BUG(); NULL; })
#define P4SEGADDR(a)	({ (void)(a); BUG(); NULL; })
#endif
#endif /* P1SEG */

/* Check if an address can be reached in 29 bits */
#define IS_29BIT(a)	(((unsigned long)(a)) < 0x20000000)

#ifdef CONFIG_SH_STORE_QUEUES
/*
 * This is a special case for the SH-4 store queues, as pages for this
 * space still need to be faulted in before it's possible to flush the
 * store queue cache for writeout to the remapped region.
 */
#define P3_ADDR_MAX		(P4SEG_STORE_QUE + 0x04000000)
#else
#define P3_ADDR_MAX		P4SEG
#endif

#endif /* __KERNEL__ */
#endif /* __ASM_SH_ADDRSPACE_H */
Tue Jul 19 12:34:01 PDT 2016
Fri Jul 22 15:38:57 PDT 2016
Sun, Jul 24, 2016  1:22:45 PM
Mon, Jul 25, 2016  6:31:29 PM
Mon, Jul 25, 2016  7:44:32 PM
Tue, Jul 26, 2016  2:20:08 PM
