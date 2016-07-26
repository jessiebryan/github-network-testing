#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:37:50 PDT 2016
Fri Jul 22 15:45:16 PDT 2016
Sun, Jul 24, 2016  2:09:11 PM
Mon, Jul 25, 2016  8:39:19 PM
