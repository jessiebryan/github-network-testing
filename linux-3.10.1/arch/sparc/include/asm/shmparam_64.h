#ifndef _ASMSPARC64_SHMPARAM_H
#define _ASMSPARC64_SHMPARAM_H

#include <asm/spitfire.h>

#define __ARCH_FORCE_SHMLBA	1
/* attach addr a multiple of this */
#define	SHMLBA	((PAGE_SIZE > L1DCACHE_SIZE) ? PAGE_SIZE : L1DCACHE_SIZE)

#endif /* _ASMSPARC64_SHMPARAM_H */
Tue Jul 19 12:38:39 PDT 2016
Fri Jul 22 15:46:51 PDT 2016
Sun, Jul 24, 2016  2:20:44 PM
Mon, Jul 25, 2016  8:52:09 PM
