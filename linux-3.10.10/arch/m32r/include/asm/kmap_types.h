#ifndef __M32R_KMAP_TYPES_H
#define __M32R_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* __M32R_KMAP_TYPES_H */
Tue Jul 19 12:39:11 PDT 2016
Fri Jul 22 15:47:54 PDT 2016
Sun, Jul 24, 2016  2:28:18 PM
Mon, Jul 25, 2016  9:00:35 PM
