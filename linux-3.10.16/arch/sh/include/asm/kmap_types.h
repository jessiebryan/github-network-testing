#ifndef __SH_KMAP_TYPES_H
#define __SH_KMAP_TYPES_H

/* Dummy header just to define km_type. */

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:45:15 PDT 2016
Fri Jul 22 15:59:08 PDT 2016
Sun, Jul 24, 2016  3:52:39 PM
Mon, Jul 25, 2016 10:34:58 PM
