#ifndef _ASMSPARC_SHMPARAM_H
#define _ASMSPARC_SHMPARAM_H

#define __ARCH_FORCE_SHMLBA 	1

extern int vac_cache_size;
#define SHMLBA (vac_cache_size ? vac_cache_size : PAGE_SIZE)

#endif /* _ASMSPARC_SHMPARAM_H */
Tue Jul 19 12:44:38 PDT 2016
Fri Jul 22 15:57:59 PDT 2016
Sun, Jul 24, 2016  3:43:40 PM
Mon, Jul 25, 2016 10:24:58 PM
