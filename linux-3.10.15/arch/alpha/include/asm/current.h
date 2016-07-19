#ifndef _ALPHA_CURRENT_H
#define _ALPHA_CURRENT_H

#include <linux/thread_info.h>

#define get_current()	(current_thread_info()->task)
#define current		get_current()

#endif /* _ALPHA_CURRENT_H */
Tue Jul 19 12:44:24 PDT 2016
