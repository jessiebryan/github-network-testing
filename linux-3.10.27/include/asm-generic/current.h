#ifndef __ASM_GENERIC_CURRENT_H
#define __ASM_GENERIC_CURRENT_H

#include <linux/thread_info.h>

#define get_current() (current_thread_info()->task)
#define current get_current()

#endif /* __ASM_GENERIC_CURRENT_H */
Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:12:59 PDT 2016
Sun, Jul 24, 2016  5:38:06 PM
