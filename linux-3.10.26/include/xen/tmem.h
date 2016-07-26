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
Tue Jul 19 12:52:01 PDT 2016
Fri Jul 22 16:12:00 PDT 2016
Sun, Jul 24, 2016  5:30:49 PM
Tue, Jul 26, 2016 12:23:50 AM
