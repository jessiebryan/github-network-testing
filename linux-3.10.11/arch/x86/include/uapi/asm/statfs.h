#ifndef _ASM_X86_STATFS_H
#define _ASM_X86_STATFS_H

/*
 * We need compat_statfs64 to be packed, because the i386 ABI won't
 * add padding at the end to bring it to a multiple of 8 bytes, but
 * the x86_64 ABI will.
 */
#define ARCH_PACK_COMPAT_STATFS64 __attribute__((packed,aligned(4)))

#include <asm-generic/statfs.h>
#endif /* _ASM_X86_STATFS_H */
Tue Jul 19 12:42:00 PDT 2016
Fri Jul 22 15:53:18 PDT 2016
Sun, Jul 24, 2016  3:07:16 PM
Mon, Jul 25, 2016  9:44:22 PM
