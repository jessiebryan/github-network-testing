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
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:45 PDT 2016
Sun, Jul 24, 2016  1:21:09 PM
Mon, Jul 25, 2016  6:29:34 PM
Mon, Jul 25, 2016  7:42:39 PM
Tue, Jul 26, 2016  2:18:21 PM
