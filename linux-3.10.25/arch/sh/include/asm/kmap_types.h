#ifndef __SH_KMAP_TYPES_H
#define __SH_KMAP_TYPES_H

/* Dummy header just to define km_type. */

#ifdef CONFIG_DEBUG_HIGHMEM
#define  __WITH_KM_FENCE
#endif

#include <asm-generic/kmap_types.h>

#undef __WITH_KM_FENCE

#endif
Tue Jul 19 12:50:59 PDT 2016
Fri Jul 22 16:09:57 PDT 2016
Sun, Jul 24, 2016  5:15:53 PM
Tue, Jul 26, 2016 12:07:22 AM
