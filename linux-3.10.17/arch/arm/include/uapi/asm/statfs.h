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
Tue Jul 19 12:45:40 PDT 2016
Fri Jul 22 15:59:57 PDT 2016
Sun, Jul 24, 2016  3:59:01 PM
Mon, Jul 25, 2016 10:42:03 PM
