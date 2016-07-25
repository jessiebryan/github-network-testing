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
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:01 PM
