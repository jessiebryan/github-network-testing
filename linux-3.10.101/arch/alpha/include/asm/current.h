#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:40:21 PDT 2016
Fri Jul 22 15:50:13 PDT 2016
Sun, Jul 24, 2016  2:45:01 PM
Mon, Jul 25, 2016  9:19:13 PM
