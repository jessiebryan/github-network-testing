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
Tue Jul 19 12:46:58 PDT 2016
Fri Jul 22 16:02:24 PDT 2016
Sun, Jul 24, 2016  4:18:06 PM
Mon, Jul 25, 2016 11:03:17 PM
