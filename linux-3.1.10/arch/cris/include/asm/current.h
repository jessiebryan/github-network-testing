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
Tue Jul 19 12:33:18 PDT 2016
Fri Jul 22 15:37:39 PDT 2016
Sun, Jul 24, 2016  1:12:54 PM
Mon, Jul 25, 2016  6:19:41 PM
Mon, Jul 25, 2016  7:32:57 PM
Tue, Jul 26, 2016  2:09:07 PM
