#ifndef _ASMSPARC_SHMPARAM_H
#define _ASMSPARC_SHMPARAM_H

#define __ARCH_FORCE_SHMLBA 	1

extern int vac_cache_size;
#define SHMLBA (vac_cache_size ? vac_cache_size : \
		(sparc_cpu_model == sun4c ? (64 * 1024) : \
		 (sparc_cpu_model == sun4 ? (128 * 1024) : PAGE_SIZE)))

#endif /* _ASMSPARC_SHMPARAM_H */
Tue Jul 19 12:37:25 PDT 2016
Fri Jul 22 15:44:35 PDT 2016
Sun, Jul 24, 2016  2:04:17 PM
Mon, Jul 25, 2016  8:33:35 PM
