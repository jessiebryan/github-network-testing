#ifndef _CRIS_CURRENT_H
#define _CRIS_CURRENT_H

#include <linux/thread_info.h>

struct task_struct;

static inline struct task_struct * get_current(void)
{
        return current_thread_info()->task;
}
 
#define current get_current()

#endif /* !(_CRIS_CURRENT_H) */
Tue Jul 19 12:48:54 PDT 2016
Fri Jul 22 16:06:03 PDT 2016
Sun, Jul 24, 2016  4:46:12 PM
Mon, Jul 25, 2016 11:34:30 PM
