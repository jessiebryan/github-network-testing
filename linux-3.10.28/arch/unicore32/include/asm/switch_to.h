/*
 * Task switching for PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2012 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __UNICORE_SWITCH_TO_H__
#define __UNICORE_SWITCH_TO_H__

struct task_struct;
struct thread_info;

/*
 * switch_to(prev, next) should switch from task `prev' to `next'
 * `prev' will never be the same as `next'.  schedule() itself
 * contains the memory barrier to tell GCC not to cache `current'.
 */
extern struct task_struct *__switch_to(struct task_struct *,
		struct thread_info *, struct thread_info *);

#define switch_to(prev, next, last)					\
	do {								\
		last = __switch_to(prev, task_thread_info(prev),	\
					task_thread_info(next));	\
	} while (0)

#endif /* __UNICORE_SWITCH_TO_H__ */
Tue Jul 19 12:52:58 PDT 2016
Fri Jul 22 16:13:51 PDT 2016
Sun, Jul 24, 2016  5:44:18 PM
Tue, Jul 26, 2016 12:38:41 AM
