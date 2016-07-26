#ifndef _ASM_IA64_KMAP_TYPES_H
#define _ASM_IA64_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* _ASM_IA64_KMAP_TYPES_H */
Tue Jul 19 12:44:30 PDT 2016
Fri Jul 22 15:57:46 PDT 2016
Sun, Jul 24, 2016  3:41:54 PM
Mon, Jul 25, 2016 10:22:59 PM
