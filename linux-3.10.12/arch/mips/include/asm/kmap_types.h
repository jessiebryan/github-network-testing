#ifndef _ASM_KMAP_TYPES_H
#define _ASM_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define	 __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:42:36 PDT 2016
Fri Jul 22 15:54:16 PDT 2016
Sun, Jul 24, 2016  3:14:43 PM
