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
Tue Jul 19 12:51:02 PDT 2016
Fri Jul 22 16:10:04 PDT 2016
Sun, Jul 24, 2016  5:16:40 PM
Tue, Jul 26, 2016 12:08:14 AM
