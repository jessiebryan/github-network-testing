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
Tue Jul 19 12:50:12 PDT 2016
Fri Jul 22 16:08:29 PDT 2016
Sun, Jul 24, 2016  5:04:46 PM
Mon, Jul 25, 2016 11:55:02 PM
