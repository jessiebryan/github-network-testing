#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:36:03 PDT 2016
Fri Jul 22 15:41:53 PDT 2016
Sun, Jul 24, 2016  1:44:27 PM
Mon, Jul 25, 2016  8:10:05 PM
Tue, Jul 26, 2016  2:44:06 PM
