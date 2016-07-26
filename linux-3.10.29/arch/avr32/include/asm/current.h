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
Tue Jul 19 12:53:25 PDT 2016
Fri Jul 22 16:14:44 PDT 2016
Sun, Jul 24, 2016  5:50:56 PM
Tue, Jul 26, 2016 12:46:00 AM
