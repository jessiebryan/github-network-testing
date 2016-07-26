#ifndef _M68K_CURRENT_H
#define _M68K_CURRENT_H

#ifdef CONFIG_MMU

register struct task_struct *current __asm__("%a2");

#else

/*
 *	Rather than dedicate a register (as the m68k source does), we
 *	just keep a global,  we should probably just change it all to be
 *	current and lose _current_task.
 */
#include <linux/thread_info.h>

struct task_struct;

static inline struct task_struct *get_current(void)
{
	return(current_thread_info()->task);
}

#define	current	get_current()

#endif /* CONFNIG_MMU */

#endif /* !(_M68K_CURRENT_H) */
Tue Jul 19 12:47:02 PDT 2016
Fri Jul 22 16:02:31 PDT 2016
Sun, Jul 24, 2016  4:18:58 PM
Mon, Jul 25, 2016 11:04:15 PM
