#ifndef _PVCLOCK_GTOD_H
#define _PVCLOCK_GTOD_H

#include <linux/notifier.h>

extern int pvclock_gtod_register_notifier(struct notifier_block *nb);
extern int pvclock_gtod_unregister_notifier(struct notifier_block *nb);

#endif /* _PVCLOCK_GTOD_H */
Tue Jul 19 12:51:57 PDT 2016
Fri Jul 22 16:11:52 PDT 2016
Sun, Jul 24, 2016  5:29:43 PM
Tue, Jul 26, 2016 12:22:36 AM
