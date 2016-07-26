#ifndef __SH_KMAP_TYPES_H
#define __SH_KMAP_TYPES_H

/* Dummy header just to define km_type. */

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:37:24 PDT 2016
Fri Jul 22 15:44:33 PDT 2016
Sun, Jul 24, 2016  2:04:02 PM
Mon, Jul 25, 2016  8:33:15 PM
