#ifndef __ASM_GENERIC_CURRENT_H
#define __ASM_GENERIC_CURRENT_H

#include <linux/thread_info.h>

#define get_current() (current_thread_info()->task)
#define current get_current()

#endif /* __ASM_GENERIC_CURRENT_H */
Tue Jul 19 12:37:39 PDT 2016
Fri Jul 22 15:45:00 PDT 2016
Sun, Jul 24, 2016  2:07:14 PM
Mon, Jul 25, 2016  8:37:07 PM
