#ifndef __LINUX_MUTEX_DEBUG_H
#define __LINUX_MUTEX_DEBUG_H

#include <linux/linkage.h>
#include <linux/lockdep.h>

/*
 * Mutexes - debugging helpers:
 */

#define __DEBUG_MUTEX_INITIALIZER(lockname)				\
	, .magic = &lockname

#define mutex_init(mutex)						\
do {									\
	static struct lock_class_key __key;				\
									\
	__mutex_init((mutex), #mutex, &__key);				\
} while (0)

extern void mutex_destroy(struct mutex *lock);

#endif
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:43 PDT 2016
Sun, Jul 24, 2016  1:43:08 PM
Mon, Jul 25, 2016  8:08:32 PM
Tue, Jul 26, 2016  2:42:40 PM
