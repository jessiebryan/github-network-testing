/*
 * Based on <asm-i386/mman.h>.
 *
 * Modified 1998-2000, 2002
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */
#ifndef _ASM_IA64_MMAN_H
#define _ASM_IA64_MMAN_H

#include <uapi/asm/mman.h>

#ifndef __ASSEMBLY__
#define arch_mmap_check	ia64_mmap_check
int ia64_mmap_check(unsigned long addr, unsigned long len,
		unsigned long flags);
#endif
#endif /* _ASM_IA64_MMAN_H */
Tue Jul 19 12:38:32 PDT 2016
Fri Jul 22 15:46:37 PDT 2016
Sun, Jul 24, 2016  2:18:58 PM
Mon, Jul 25, 2016  8:50:11 PM
