#ifndef _ASMARM_CURRENT_H
#define _ASMARM_CURRENT_H

#include <linux/thread_info.h>

static inline struct task_struct *get_current(void) __attribute_const__;

static inline struct task_struct *get_current(void)
{
	return current_thread_info()->task;
}

#define current (get_current())

#endif /* _ASMARM_CURRENT_H */
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:34 PDT 2016
Sun, Jul 24, 2016  1:19:46 PM
Mon, Jul 25, 2016  6:27:54 PM
Mon, Jul 25, 2016  7:41:01 PM
Tue, Jul 26, 2016  2:16:46 PM
