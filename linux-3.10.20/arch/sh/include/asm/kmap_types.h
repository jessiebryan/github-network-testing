#ifndef __SH_KMAP_TYPES_H
#define __SH_KMAP_TYPES_H

/* Dummy header just to define km_type. */

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:47:46 PDT 2016
Fri Jul 22 16:03:53 PDT 2016
Sun, Jul 24, 2016  4:29:33 PM
Mon, Jul 25, 2016 11:15:58 PM
