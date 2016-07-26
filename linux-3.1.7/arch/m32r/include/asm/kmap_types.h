#ifndef __M32R_KMAP_TYPES_H
#define __M32R_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* __M32R_KMAP_TYPES_H */
Tue Jul 19 12:36:44 PDT 2016
Fri Jul 22 15:43:16 PDT 2016
Sun, Jul 24, 2016  1:54:30 PM
Mon, Jul 25, 2016  8:21:56 PM
