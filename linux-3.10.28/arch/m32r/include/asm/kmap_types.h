#ifndef __M32R_KMAP_TYPES_H
#define __M32R_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* __M32R_KMAP_TYPES_H */
Tue Jul 19 12:52:50 PDT 2016
Fri Jul 22 16:13:35 PDT 2016
Sun, Jul 24, 2016  5:42:23 PM
Tue, Jul 26, 2016 12:36:35 AM
