#ifndef _ASM_IA64_KMAP_TYPES_H
#define _ASM_IA64_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* _ASM_IA64_KMAP_TYPES_H */
Tue Jul 19 12:46:22 PDT 2016
Fri Jul 22 16:01:17 PDT 2016
Sun, Jul 24, 2016  4:09:32 PM
Mon, Jul 25, 2016 10:53:45 PM
