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
Tue Jul 19 12:38:29 PDT 2016
Fri Jul 22 15:46:31 PDT 2016
Sun, Jul 24, 2016  2:18:19 PM
Mon, Jul 25, 2016  8:49:26 PM
