#ifndef __ASM_AVR32_CURRENT_H
#define __ASM_AVR32_CURRENT_H

#include <linux/thread_info.h>

struct task_struct;

inline static struct task_struct * get_current(void)
{
	return current_thread_info()->task;
}

#define current get_current()

#endif /* __ASM_AVR32_CURRENT_H */
Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:12 PDT 2016
Sun, Jul 24, 2016  5:32:17 PM
Tue, Jul 26, 2016 12:25:27 AM
