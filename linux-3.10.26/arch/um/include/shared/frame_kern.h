/* 
 * Copyright (C) 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __FRAME_KERN_H_
#define __FRAME_KERN_H_

extern int setup_signal_stack_sc(unsigned long stack_top, int sig, 
				 struct k_sigaction *ka,
				 struct pt_regs *regs, 
				 sigset_t *mask);
extern int setup_signal_stack_si(unsigned long stack_top, int sig, 
				 struct k_sigaction *ka,
				 struct pt_regs *regs, siginfo_t *info, 
				 sigset_t *mask);

#endif

Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:16 PDT 2016
Sun, Jul 24, 2016  5:25:37 PM
Tue, Jul 26, 2016 12:18:06 AM
