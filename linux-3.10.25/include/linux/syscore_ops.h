/*
 *  syscore_ops.h - System core operations.
 *
 *  Copyright (C) 2011 Rafael J. Wysocki <rjw@sisk.pl>, Novell Inc.
 *
 *  This file is released under the GPLv2.
 */

#ifndef _LINUX_SYSCORE_OPS_H
#define _LINUX_SYSCORE_OPS_H

#include <linux/list.h>

struct syscore_ops {
	struct list_head node;
	int (*suspend)(void);
	void (*resume)(void);
	void (*shutdown)(void);
};

extern void register_syscore_ops(struct syscore_ops *ops);
extern void unregister_syscore_ops(struct syscore_ops *ops);
#ifdef CONFIG_PM_SLEEP
extern int syscore_suspend(void);
extern void syscore_resume(void);
#endif
extern void syscore_shutdown(void);

#endif
Tue Jul 19 12:51:19 PDT 2016
Fri Jul 22 16:10:35 PDT 2016
Sun, Jul 24, 2016  5:20:34 PM
Tue, Jul 26, 2016 12:12:31 AM
