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
Tue Jul 19 12:35:39 PDT 2016
Fri Jul 22 15:41:09 PDT 2016
Sun, Jul 24, 2016  1:38:46 PM
Mon, Jul 25, 2016  8:03:24 PM
Tue, Jul 26, 2016  2:37:51 PM
