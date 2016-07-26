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
Tue Jul 19 12:44:22 PDT 2016
Fri Jul 22 15:57:29 PDT 2016
Sun, Jul 24, 2016  3:39:48 PM
Mon, Jul 25, 2016 10:20:38 PM
