#ifndef __M32R_KMAP_TYPES_H
#define __M32R_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif /* __M32R_KMAP_TYPES_H */
Tue Jul 19 12:47:02 PDT 2016
Fri Jul 22 16:02:31 PDT 2016
Sun, Jul 24, 2016  4:18:53 PM
Mon, Jul 25, 2016 11:04:10 PM
