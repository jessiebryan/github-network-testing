#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:33:48 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:41 PM
Mon, Jul 25, 2016  6:27:49 PM
Mon, Jul 25, 2016  7:40:56 PM
Tue, Jul 26, 2016  2:16:41 PM
