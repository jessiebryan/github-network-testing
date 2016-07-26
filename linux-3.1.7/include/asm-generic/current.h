#ifndef __ASM_GENERIC_CURRENT_H
#define __ASM_GENERIC_CURRENT_H

#include <linux/thread_info.h>

#define get_current() (current_thread_info()->task)
#define current get_current()

#endif /* __ASM_GENERIC_CURRENT_H */
Tue Jul 19 12:37:03 PDT 2016
Fri Jul 22 15:43:52 PDT 2016
Sun, Jul 24, 2016  1:58:59 PM
Mon, Jul 25, 2016  8:27:16 PM
