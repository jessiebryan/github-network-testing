/*
 * Copyright (C) 2009  Matt Fleming
 *
 * Based on:
 *	The x86 implementation - arch/x86/include/asm/stacktrace.h
 */
#ifndef _ASM_SH_STACKTRACE_H
#define _ASM_SH_STACKTRACE_H

/* Generic stack tracer with callbacks */

struct stacktrace_ops {
	void (*address)(void *data, unsigned long address, int reliable);
	/* On negative return stop dumping */
	int (*stack)(void *data, char *name);
};

void dump_trace(struct task_struct *tsk, struct pt_regs *regs,
		unsigned long *stack,
		const struct stacktrace_ops *ops, void *data);

#endif /* _ASM_SH_STACKTRACE_H */
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:13 PDT 2016
Sun, Jul 24, 2016  1:39:20 PM
Mon, Jul 25, 2016  8:04:04 PM
Tue, Jul 26, 2016  2:38:29 PM
