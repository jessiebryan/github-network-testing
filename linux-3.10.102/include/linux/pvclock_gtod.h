#ifndef _PVCLOCK_GTOD_H
#define _PVCLOCK_GTOD_H

#include <linux/notifier.h>

extern int pvclock_gtod_register_notifier(struct notifier_block *nb);
extern int pvclock_gtod_unregister_notifier(struct notifier_block *nb);

#endif /* _PVCLOCK_GTOD_H */
Tue Jul 19 12:41:31 PDT 2016
Fri Jul 22 15:52:35 PDT 2016
Sun, Jul 24, 2016  3:01:48 PM
Mon, Jul 25, 2016  9:38:13 PM
