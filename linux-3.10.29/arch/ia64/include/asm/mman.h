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
Tue Jul 19 12:53:28 PDT 2016
Fri Jul 22 16:14:49 PDT 2016
Sun, Jul 24, 2016  5:51:35 PM
Tue, Jul 26, 2016 12:46:45 AM
