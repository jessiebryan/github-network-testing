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
Tue Jul 19 12:40:24 PDT 2016
Fri Jul 22 15:50:21 PDT 2016
Sun, Jul 24, 2016  2:45:56 PM
Mon, Jul 25, 2016  9:20:15 PM
