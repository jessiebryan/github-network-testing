#ifndef _ASM_IA64_STATFS_H
#define _ASM_IA64_STATFS_H

/*
 * Based on <asm-i386/statfs.h>.
 *
 * Modified 1998, 1999, 2003
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */

/*
 * We need compat_statfs64 to be packed, because the i386 ABI won't
 * add padding at the end to bring it to a multiple of 8 bytes, but
 * the IA64 ABI will.
 */
#define ARCH_PACK_COMPAT_STATFS64 __attribute__((packed,aligned(4)))

#include <asm-generic/statfs.h>

#endif /* _ASM_IA64_STATFS_H */
Tue Jul 19 12:47:39 PDT 2016
Fri Jul 22 16:03:42 PDT 2016
Sun, Jul 24, 2016  4:28:06 PM
Mon, Jul 25, 2016 11:14:22 PM
