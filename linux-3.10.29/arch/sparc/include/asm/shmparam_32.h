#ifndef _ASMSPARC_SHMPARAM_H
#define _ASMSPARC_SHMPARAM_H

#define __ARCH_FORCE_SHMLBA 	1

extern int vac_cache_size;
#define SHMLBA (vac_cache_size ? vac_cache_size : PAGE_SIZE)

#endif /* _ASMSPARC_SHMPARAM_H */
Tue Jul 19 12:53:35 PDT 2016
Fri Jul 22 16:15:03 PDT 2016
Sun, Jul 24, 2016  5:53:22 PM
Tue, Jul 26, 2016 12:48:43 AM
