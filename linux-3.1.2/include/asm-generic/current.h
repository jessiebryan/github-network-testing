#ifndef __ASM_GENERIC_CURRENT_H
#define __ASM_GENERIC_CURRENT_H

#include <linux/thread_info.h>

#define get_current() (current_thread_info()->task)
#define current get_current()

#endif /* __ASM_GENERIC_CURRENT_H */
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:25:59 PM
Mon, Jul 25, 2016  6:35:23 PM
Mon, Jul 25, 2016  7:48:19 PM
Tue, Jul 26, 2016  2:23:42 PM
