#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:48 PDT 2016
Sun, Jul 24, 2016  5:22:04 PM
Tue, Jul 26, 2016 12:14:10 AM
