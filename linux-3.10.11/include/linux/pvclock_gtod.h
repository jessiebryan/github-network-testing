#ifndef _PVCLOCK_GTOD_H
#define _PVCLOCK_GTOD_H

#include <linux/notifier.h>

extern int pvclock_gtod_register_notifier(struct notifier_block *nb);
extern int pvclock_gtod_unregister_notifier(struct notifier_block *nb);

#endif /* _PVCLOCK_GTOD_H */
Tue Jul 19 12:42:21 PDT 2016
Fri Jul 22 15:53:48 PDT 2016
Sun, Jul 24, 2016  3:11:01 PM
Mon, Jul 25, 2016  9:48:36 PM
