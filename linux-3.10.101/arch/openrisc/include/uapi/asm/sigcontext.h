/*
 * OpenRISC Linux
 *
 * Linux architectural port borrowing liberally from similar works of
 * others.  All original copyrights apply as per the original source
 * declaration.
 *
 * OpenRISC implementation:
 * Copyright (C) 2003 Matjaz Breskvar <phoenix@bsemi.com>
 * Copyright (C) 2010-2011 Jonas Bonn <jonas@southpole.se>
 * et al.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __ASM_OPENRISC_SIGCONTEXT_H
#define __ASM_OPENRISC_SIGCONTEXT_H

#include <asm/ptrace.h>

/* This struct is saved by setup_frame in signal.c, to keep the current
   context while a signal handler is executed. It's restored by sys_sigreturn.
*/

struct sigcontext {
	struct user_regs_struct regs;  /* needs to be first */
	unsigned long oldmask;
};

#endif /* __ASM_OPENRISC_SIGCONTEXT_H */
Tue Jul 19 12:40:32 PDT 2016
Fri Jul 22 15:50:35 PDT 2016
Sun, Jul 24, 2016  2:47:34 PM
Mon, Jul 25, 2016  9:22:08 PM
