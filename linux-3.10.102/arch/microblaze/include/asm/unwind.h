/*
 * Backtrace support for Microblaze
 *
 * Copyright (C) 2010  Digital Design Corporation
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef __MICROBLAZE_UNWIND_H
#define __MICROBLAZE_UNWIND_H

struct stack_trace;

struct trap_handler_info {
	unsigned long start_addr;
	unsigned long end_addr;
	const char    *trap_name;
};
extern struct trap_handler_info microblaze_trap_handlers;

extern const char _hw_exception_handler;
extern const char ex_handler_unhandled;

void microblaze_unwind(struct task_struct *task, struct stack_trace *trace);

#endif	/* __MICROBLAZE_UNWIND_H */

Tue Jul 19 12:41:08 PDT 2016
Fri Jul 22 15:51:46 PDT 2016
Sun, Jul 24, 2016  2:56:12 PM
Mon, Jul 25, 2016  9:31:52 PM
