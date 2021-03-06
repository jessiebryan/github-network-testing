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
Tue Jul 19 12:41:37 PDT 2016
Fri Jul 22 15:52:44 PDT 2016
Sun, Jul 24, 2016  3:02:54 PM
Mon, Jul 25, 2016  9:39:27 PM
