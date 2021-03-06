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
Tue Jul 19 12:47:05 PDT 2016
Fri Jul 22 16:02:36 PDT 2016
Sun, Jul 24, 2016  4:19:38 PM
Mon, Jul 25, 2016 11:04:59 PM
