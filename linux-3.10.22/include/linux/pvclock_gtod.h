#ifndef _PVCLOCK_GTOD_H
#define _PVCLOCK_GTOD_H

#include <linux/notifier.h>

extern int pvclock_gtod_register_notifier(struct notifier_block *nb);
extern int pvclock_gtod_unregister_notifier(struct notifier_block *nb);

#endif /* _PVCLOCK_GTOD_H */
Tue Jul 19 12:49:21 PDT 2016
Fri Jul 22 16:06:52 PDT 2016
Sun, Jul 24, 2016  4:52:29 PM
Mon, Jul 25, 2016 11:41:32 PM
