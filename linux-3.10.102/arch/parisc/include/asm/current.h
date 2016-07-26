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
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:51 PDT 2016
Sun, Jul 24, 2016  2:56:47 PM
Mon, Jul 25, 2016  9:32:33 PM
