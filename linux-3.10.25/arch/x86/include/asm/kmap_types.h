#ifndef _ASM_X86_KMAP_TYPES_H
#define _ASM_X86_KMAP_TYPES_H

#if defined(CONFIG_X86_32) && defined(CONFIG_DEBUG_HIGHMEM)
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* _ASM_X86_KMAP_TYPES_H */
Tue Jul 19 12:51:01 PDT 2016
Fri Jul 22 16:10:02 PDT 2016
Sun, Jul 24, 2016  5:16:28 PM
Tue, Jul 26, 2016 12:08:01 AM
