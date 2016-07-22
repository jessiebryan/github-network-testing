#ifndef _ASM_X86_MMAN_H
#define _ASM_X86_MMAN_H

#define MAP_32BIT	0x40		/* only give out 32bit addresses */

#define MAP_HUGE_2MB    (21 << MAP_HUGE_SHIFT)
#define MAP_HUGE_1GB    (30 << MAP_HUGE_SHIFT)

#include <asm-generic/mman.h>

#endif /* _ASM_X86_MMAN_H */
Tue Jul 19 12:50:22 PDT 2016
Fri Jul 22 16:08:49 PDT 2016
