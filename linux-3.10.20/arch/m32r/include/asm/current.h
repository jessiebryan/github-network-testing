#ifndef _ASM_M32R_CURRENT_H
#define _ASM_M32R_CURRENT_H

#include <linux/thread_info.h>

struct task_struct;

static __inline__ struct task_struct *get_current(void)
{
	return current_thread_info()->task;
}

#define current	(get_current())

#endif	/* _ASM_M32R_CURRENT_H */
Tue Jul 19 12:47:40 PDT 2016
Fri Jul 22 16:03:42 PDT 2016
Sun, Jul 24, 2016  4:28:08 PM
Mon, Jul 25, 2016 11:14:23 PM
