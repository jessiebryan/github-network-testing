/*
 * Copyright (C) 2002 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __SKAS_H
#define __SKAS_H

#include "sysdep/ptrace.h"

extern int userspace_pid[];
extern int proc_mm, ptrace_faultinfo, ptrace_ldt;
extern int skas_needs_stub;

extern int user_thread(unsigned long stack, int flags);
extern void new_thread_handler(void);
extern void handle_syscall(struct uml_pt_regs *regs);
extern int new_mm(unsigned long stack);
extern long execute_syscall_skas(void *r);
extern unsigned long current_stub_stack(void);

#endif
Tue Jul 19 12:36:18 PDT 2016
Fri Jul 22 15:42:23 PDT 2016
Sun, Jul 24, 2016  1:47:58 PM
Mon, Jul 25, 2016  8:14:16 PM
