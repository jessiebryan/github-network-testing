/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

#ifndef _ASM_TILE_CURRENT_H
#define _ASM_TILE_CURRENT_H

#include <linux/thread_info.h>

struct task_struct;

static inline struct task_struct *get_current(void)
{
	return current_thread_info()->task;
}
#define current get_current()

/* Return a usable "task_struct" pointer even if the real one is corrupt. */
struct task_struct *validate_current(void);

#endif /* _ASM_TILE_CURRENT_H */
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:16 PDT 2016
Sun, Jul 24, 2016  1:39:37 PM
Mon, Jul 25, 2016  8:04:24 PM
Tue, Jul 26, 2016  2:38:48 PM
