#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:46:16 PDT 2016
Fri Jul 22 16:01:05 PDT 2016
Sun, Jul 24, 2016  4:07:59 PM
Mon, Jul 25, 2016 10:52:01 PM
