#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:45:39 PDT 2016
Fri Jul 22 15:59:55 PDT 2016
Sun, Jul 24, 2016  3:58:46 PM
Mon, Jul 25, 2016 10:41:46 PM
