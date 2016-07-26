#ifndef __M32R_KMAP_TYPES_H
#define __M32R_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* __M32R_KMAP_TYPES_H */
Tue Jul 19 12:42:35 PDT 2016
Fri Jul 22 15:54:13 PDT 2016
Sun, Jul 24, 2016  3:14:21 PM
Mon, Jul 25, 2016  9:52:22 PM
