#ifndef _ASMSPARC_SHMPARAM_H
#define _ASMSPARC_SHMPARAM_H

#define __ARCH_FORCE_SHMLBA 	1

extern int vac_cache_size;
#define SHMLBA (vac_cache_size ? vac_cache_size : \
		(sparc_cpu_model == sun4c ? (64 * 1024) : \
		 (sparc_cpu_model == sun4 ? (128 * 1024) : PAGE_SIZE)))

#endif /* _ASMSPARC_SHMPARAM_H */
Tue Jul 19 12:38:04 PDT 2016
Fri Jul 22 15:45:42 PDT 2016
Sun, Jul 24, 2016  2:12:31 PM
Mon, Jul 25, 2016  8:43:01 PM
