/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ASM_ARC_SWITCH_TO_H
#define _ASM_ARC_SWITCH_TO_H

#ifndef __ASSEMBLY__

#include <linux/sched.h>

#ifdef CONFIG_ARC_FPU_SAVE_RESTORE

extern void fpu_save_restore(struct task_struct *p, struct task_struct *n);
#define ARC_FPU_PREV(p, n)	fpu_save_restore(p, n)
#define ARC_FPU_NEXT(t)

#else

#define ARC_FPU_PREV(p, n)
#define ARC_FPU_NEXT(n)

#endif /* !CONFIG_ARC_FPU_SAVE_RESTORE */

struct task_struct *__switch_to(struct task_struct *p, struct task_struct *n);

#define switch_to(prev, next, last)	\
do {					\
	ARC_FPU_PREV(prev, next);	\
	last = __switch_to(prev, next);\
	ARC_FPU_NEXT(next);		\
	mb();				\
} while (0)

#endif

#endif
Tue Jul 19 12:46:16 PDT 2016
Fri Jul 22 16:01:05 PDT 2016
Sun, Jul 24, 2016  4:08:06 PM
Mon, Jul 25, 2016 10:52:08 PM
