/* 
 * Copyright (C) 2000 - 2008 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#include <asm/unistd.h>
#include <sysdep/ptrace.h>

typedef long syscall_handler_t(struct pt_regs);

extern syscall_handler_t *sys_call_table[];

#define EXECUTE_SYSCALL(syscall, regs) \
	((long (*)(struct syscall_args)) \
	 (*sys_call_table[syscall]))(SYSCALL_ARGS(&regs->regs))
Tue Jul 19 12:50:23 PDT 2016
Fri Jul 22 16:08:49 PDT 2016
Sun, Jul 24, 2016  5:07:21 PM
Mon, Jul 25, 2016 11:57:56 PM
