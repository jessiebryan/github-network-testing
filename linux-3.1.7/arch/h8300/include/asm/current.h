#ifndef _H8300_CURRENT_H
#define _H8300_CURRENT_H
/*
 *	current.h
 *	(C) Copyright 2000, Lineo, David McCullough <davidm@lineo.com>
 *	(C) Copyright 2002, Greg Ungerer (gerg@snapgear.com)
 *
 *	rather than dedicate a register (as the m68k source does), we
 *	just keep a global,  we should probably just change it all to be
 *	current and lose _current_task.
 */

#include <linux/thread_info.h>
#include <asm/thread_info.h>

struct task_struct;

static inline struct task_struct *get_current(void)
{
	return(current_thread_info()->task);
}

#define	current	get_current()

#endif /* _H8300_CURRENT_H */
Tue Jul 19 12:36:43 PDT 2016
Fri Jul 22 15:43:15 PDT 2016
Sun, Jul 24, 2016  1:54:17 PM
Mon, Jul 25, 2016  8:21:41 PM
