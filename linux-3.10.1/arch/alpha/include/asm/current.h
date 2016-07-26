#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:38:25 PDT 2016
Fri Jul 22 15:46:23 PDT 2016
Sun, Jul 24, 2016  2:17:25 PM
Mon, Jul 25, 2016  8:48:26 PM
