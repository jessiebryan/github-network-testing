#ifndef __M32R_KMAP_TYPES_H
#define __M32R_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* __M32R_KMAP_TYPES_H */
Tue Jul 19 12:52:10 PDT 2016
Fri Jul 22 16:12:19 PDT 2016
Sun, Jul 24, 2016  5:33:05 PM
Tue, Jul 26, 2016 12:26:20 AM
