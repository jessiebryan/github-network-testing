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
Tue Jul 19 12:39:53 PDT 2016
Fri Jul 22 15:49:19 PDT 2016
Sun, Jul 24, 2016  2:38:22 PM
Mon, Jul 25, 2016  9:11:47 PM
