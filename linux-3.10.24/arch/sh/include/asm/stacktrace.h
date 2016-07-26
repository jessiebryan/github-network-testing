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
Tue Jul 19 12:50:19 PDT 2016
Fri Jul 22 16:08:44 PDT 2016
Sun, Jul 24, 2016  5:06:37 PM
Mon, Jul 25, 2016 11:57:06 PM
