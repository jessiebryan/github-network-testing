/*
 * include/asm-xtensa/current.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_CURRENT_H
#define _XTENSA_CURRENT_H

#ifndef __ASSEMBLY__

#include <linux/thread_info.h>

struct task_struct;

static inline struct task_struct *get_current(void)
{
	return current_thread_info()->task;
}

#define current get_current()

#else

#define CURRENT_SHIFT 13

#define GET_CURRENT(reg,sp)		\
	GET_THREAD_INFO(reg,sp);	\
  	l32i reg, reg, TI_TASK		\

#endif


#endif /* XTENSA_CURRENT_H */
Tue Jul 19 12:37:28 PDT 2016
Fri Jul 22 15:44:39 PDT 2016
Sun, Jul 24, 2016  2:04:47 PM
Mon, Jul 25, 2016  8:34:11 PM
