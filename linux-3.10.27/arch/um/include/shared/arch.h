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
Tue Jul 19 12:52:18 PDT 2016
Fri Jul 22 16:12:34 PDT 2016
Sun, Jul 24, 2016  5:34:56 PM
Tue, Jul 26, 2016 12:28:22 AM
