#ifndef __M32R_KMAP_TYPES_H
#define __M32R_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* __M32R_KMAP_TYPES_H */
Tue Jul 19 12:43:53 PDT 2016
Fri Jul 22 15:56:34 PDT 2016
Sun, Jul 24, 2016  3:32:47 PM
Mon, Jul 25, 2016 10:12:53 PM
