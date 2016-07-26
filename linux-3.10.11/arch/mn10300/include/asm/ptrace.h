/* MN10300 Exception frame layout and ptrace constants
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_PTRACE_H
#define _ASM_PTRACE_H

#include <uapi/asm/ptrace.h>


#define user_mode(regs)			(((regs)->epsw & EPSW_nSL) == EPSW_nSL)
#define instruction_pointer(regs)	((regs)->pc)
#define user_stack_pointer(regs)	((regs)->sp)
#define current_pt_regs()		current_frame()

#define arch_has_single_step()	(1)

#define profile_pc(regs) ((regs)->pc)

#endif /* _ASM_PTRACE_H */
Tue Jul 19 12:41:53 PDT 2016
Fri Jul 22 15:53:08 PDT 2016
Sun, Jul 24, 2016  3:05:55 PM
Mon, Jul 25, 2016  9:42:50 PM
