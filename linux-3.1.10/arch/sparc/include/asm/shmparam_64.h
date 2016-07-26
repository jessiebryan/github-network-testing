#ifndef _ASMSPARC64_SHMPARAM_H
#define _ASMSPARC64_SHMPARAM_H

#include <asm/spitfire.h>

#define __ARCH_FORCE_SHMLBA	1
/* attach addr a multiple of this */
#define	SHMLBA	((PAGE_SIZE > L1DCACHE_SIZE) ? PAGE_SIZE : L1DCACHE_SIZE)

#endif /* _ASMSPARC64_SHMPARAM_H */
Tue Jul 19 12:33:25 PDT 2016
Fri Jul 22 15:37:54 PDT 2016
Sun, Jul 24, 2016  1:14:47 PM
Mon, Jul 25, 2016  6:21:57 PM
Mon, Jul 25, 2016  7:35:11 PM
Tue, Jul 26, 2016  2:11:12 PM
