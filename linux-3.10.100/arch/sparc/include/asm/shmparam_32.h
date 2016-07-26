#ifndef _ASMSPARC_SHMPARAM_H
#define _ASMSPARC_SHMPARAM_H

#define __ARCH_FORCE_SHMLBA 	1

extern int vac_cache_size;
#define SHMLBA (vac_cache_size ? vac_cache_size : PAGE_SIZE)

#endif /* _ASMSPARC_SHMPARAM_H */
Tue Jul 19 12:39:56 PDT 2016
Fri Jul 22 15:49:25 PDT 2016
Sun, Jul 24, 2016  2:39:08 PM
Mon, Jul 25, 2016  9:12:39 PM
