#ifndef _ASM_IA64_MMAN_H
#define _ASM_IA64_MMAN_H

/*
 * Based on <asm-i386/mman.h>.
 *
 * Modified 1998-2000, 2002
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */

#include <asm-generic/mman.h>

#define MAP_GROWSUP	0x0200		/* register stack-like segment */

#ifdef __KERNEL__
#ifndef __ASSEMBLY__
#define arch_mmap_check	ia64_mmap_check
int ia64_mmap_check(unsigned long addr, unsigned long len,
		unsigned long flags);
#endif
#endif

#endif /* _ASM_IA64_MMAN_H */
Tue Jul 19 12:37:57 PDT 2016
Fri Jul 22 15:45:29 PDT 2016
