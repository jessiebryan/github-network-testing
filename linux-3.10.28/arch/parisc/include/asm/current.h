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
Tue Jul 19 12:52:53 PDT 2016
Fri Jul 22 16:13:43 PDT 2016
Sun, Jul 24, 2016  5:43:16 PM
Tue, Jul 26, 2016 12:37:33 AM
