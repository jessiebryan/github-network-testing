#ifndef _ASM_X86_KMAP_TYPES_H
#define _ASM_X86_KMAP_TYPES_H

#if defined(CONFIG_X86_32) && defined(CONFIG_DEBUG_HIGHMEM)
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* _ASM_X86_KMAP_TYPES_H */
Tue Jul 19 12:39:19 PDT 2016
Fri Jul 22 15:48:11 PDT 2016
Sun, Jul 24, 2016  2:30:16 PM
Mon, Jul 25, 2016  9:02:47 PM
