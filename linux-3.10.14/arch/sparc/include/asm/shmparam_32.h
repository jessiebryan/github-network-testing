#ifndef _ASMSPARC_SHMPARAM_H
#define _ASMSPARC_SHMPARAM_H

#define __ARCH_FORCE_SHMLBA 	1

extern int vac_cache_size;
#define SHMLBA (vac_cache_size ? vac_cache_size : PAGE_SIZE)

#endif /* _ASMSPARC_SHMPARAM_H */
Tue Jul 19 12:43:59 PDT 2016
Fri Jul 22 15:56:48 PDT 2016
Sun, Jul 24, 2016  3:34:25 PM
Mon, Jul 25, 2016 10:14:42 PM
