/*
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_SWITCH_TO_H
#define _ASM_MICROBLAZE_SWITCH_TO_H

struct task_struct;
struct thread_info;

extern struct task_struct *_switch_to(struct thread_info *prev,
					struct thread_info *next);

#define switch_to(prev, next, last)					\
	do {								\
		(last) = _switch_to(task_thread_info(prev),		\
					task_thread_info(next));	\
	} while (0)

#endif /* _ASM_MICROBLAZE_SWITCH_TO_H */
Tue Jul 19 12:43:15 PDT 2016
Fri Jul 22 15:55:25 PDT 2016
Sun, Jul 24, 2016  3:23:50 PM
Mon, Jul 25, 2016 10:02:55 PM
