/* MN10300 Current task structure accessor
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_CURRENT_H
#define _ASM_CURRENT_H

#include <linux/thread_info.h>

/*
 * dedicate E2 to keeping the current task pointer
 */
#ifdef CONFIG_MN10300_CURRENT_IN_E2

register struct task_struct *const current asm("e2") __attribute__((used));

#define get_current() current

extern struct task_struct *__current;

#else
static inline __attribute__((const))
struct task_struct *get_current(void)
{
	return current_thread_info()->task;
}

#define current get_current()
#endif

#endif /* _ASM_CURRENT_H */
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:47 PDT 2016
Sun, Jul 24, 2016  1:13:54 PM
Mon, Jul 25, 2016  6:20:53 PM
Mon, Jul 25, 2016  7:34:08 PM
Tue, Jul 26, 2016  2:10:13 PM
