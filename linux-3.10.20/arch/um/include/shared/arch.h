/*
 * Copyright (C) 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __ARCH_H__
#define __ARCH_H__

#include <sysdep/ptrace.h>

extern void arch_check_bugs(void);
extern int arch_fixup(unsigned long address, struct uml_pt_regs *regs);
extern void arch_examine_signal(int sig, struct uml_pt_regs *regs);

#endif
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:56 PDT 2016
Sun, Jul 24, 2016  4:29:59 PM
Mon, Jul 25, 2016 11:16:27 PM
