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
Tue Jul 19 12:37:16 PDT 2016
Fri Jul 22 15:44:17 PDT 2016
Sun, Jul 24, 2016  2:02:04 PM
Mon, Jul 25, 2016  8:30:55 PM
