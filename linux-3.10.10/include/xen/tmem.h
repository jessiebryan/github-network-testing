#ifndef _XEN_TMEM_H
#define _XEN_TMEM_H

#include <linux/types.h>

#ifdef CONFIG_XEN_TMEM_MODULE
#define tmem_enabled true
#else
/* defined in drivers/xen/tmem.c */
extern bool tmem_enabled;
#endif

#ifdef CONFIG_XEN_SELFBALLOONING
extern int xen_selfballoon_init(bool, bool);
#endif

#endif /* _XEN_TMEM_H */
Tue Jul 19 12:39:40 PDT 2016
Fri Jul 22 15:48:53 PDT 2016
Sun, Jul 24, 2016  2:35:16 PM
Mon, Jul 25, 2016  9:08:20 PM
