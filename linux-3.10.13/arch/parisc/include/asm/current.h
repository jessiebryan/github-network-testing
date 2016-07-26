#ifndef _PARISC_CURRENT_H
#define _PARISC_CURRENT_H

#include <linux/thread_info.h>

struct task_struct;

static inline struct task_struct * get_current(void)
{
	return current_thread_info()->task;
}
 
#define current get_current()

#endif /* !(_PARISC_CURRENT_H) */
Tue Jul 19 12:43:17 PDT 2016
Fri Jul 22 15:55:30 PDT 2016
Sun, Jul 24, 2016  3:24:27 PM
Mon, Jul 25, 2016 10:03:35 PM
