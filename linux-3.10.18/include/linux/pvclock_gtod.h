#ifndef _PVCLOCK_GTOD_H
#define _PVCLOCK_GTOD_H

#include <linux/notifier.h>

extern int pvclock_gtod_register_notifier(struct notifier_block *nb);
extern int pvclock_gtod_unregister_notifier(struct notifier_block *nb);

#endif /* _PVCLOCK_GTOD_H */
Tue Jul 19 12:46:48 PDT 2016
Fri Jul 22 16:02:05 PDT 2016
Sun, Jul 24, 2016  4:15:34 PM
Mon, Jul 25, 2016 11:00:27 PM
