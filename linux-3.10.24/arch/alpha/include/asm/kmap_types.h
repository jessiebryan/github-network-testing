#ifndef _ASM_KMAP_TYPES_H
#define _ASM_KMAP_TYPES_H

/* Dummy header just to define km_type. */

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:50:06 PDT 2016
Fri Jul 22 16:08:19 PDT 2016
Sun, Jul 24, 2016  5:03:30 PM
Mon, Jul 25, 2016 11:53:38 PM
