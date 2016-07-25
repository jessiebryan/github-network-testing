#ifndef _ASM_KMAP_TYPES_H
#define _ASM_KMAP_TYPES_H

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:37:20 PDT 2016
Fri Jul 22 15:44:26 PDT 2016
Sun, Jul 24, 2016  2:03:04 PM
