#ifndef _ASMSPARC64_SHMPARAM_H
#define _ASMSPARC64_SHMPARAM_H

#include <asm/spitfire.h>

#define __ARCH_FORCE_SHMLBA	1
/* attach addr a multiple of this */
#define	SHMLBA	((PAGE_SIZE > L1DCACHE_SIZE) ? PAGE_SIZE : L1DCACHE_SIZE)

#endif /* _ASMSPARC64_SHMPARAM_H */
Tue Jul 19 12:44:38 PDT 2016
Fri Jul 22 15:57:59 PDT 2016
Sun, Jul 24, 2016  3:43:40 PM
Mon, Jul 25, 2016 10:24:58 PM
