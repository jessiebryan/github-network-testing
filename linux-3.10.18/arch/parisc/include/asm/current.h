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
Tue Jul 19 12:46:26 PDT 2016
Fri Jul 22 16:01:25 PDT 2016
Sun, Jul 24, 2016  4:10:33 PM
Mon, Jul 25, 2016 10:54:52 PM
