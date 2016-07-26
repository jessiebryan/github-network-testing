#ifndef _ASM_KMAP_TYPES_H
#define _ASM_KMAP_TYPES_H

/* Dummy header just to define km_type. */

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:47 PDT 2016
Sun, Jul 24, 2016  1:36:13 PM
Mon, Jul 25, 2016  8:00:22 PM
Tue, Jul 26, 2016  2:35:00 PM
