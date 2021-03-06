#ifndef _ASMARM_STATFS_H
#define _ASMARM_STATFS_H

/*
 * With EABI there is 4 bytes of padding added to this structure.
 * Let's pack it so the padding goes away to simplify dual ABI support.
 * Note that user space does NOT have to pack this structure.
 */
#define ARCH_PACK_STATFS64 __attribute__((packed,aligned(4)))

#include <asm-generic/statfs.h>
#endif
Tue Jul 19 12:49:30 PDT 2016
Fri Jul 22 16:07:07 PDT 2016
Sun, Jul 24, 2016  4:54:23 PM
Mon, Jul 25, 2016 11:43:38 PM
