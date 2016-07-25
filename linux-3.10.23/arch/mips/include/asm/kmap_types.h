#ifndef _ASM_KMAP_TYPES_H
#define _ASM_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define	 __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:49:37 PDT 2016
Fri Jul 22 16:07:22 PDT 2016
Sun, Jul 24, 2016  4:56:12 PM
