/*
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */
#ifndef _ASM_MICROBLAZE_PTRACE_H
#define _ASM_MICROBLAZE_PTRACE_H

#include <uapi/asm/ptrace.h>

#ifndef __ASSEMBLY__
#define kernel_mode(regs)		((regs)->pt_mode)
#define user_mode(regs)			(!kernel_mode(regs))

#define instruction_pointer(regs)	((regs)->pc)
#define profile_pc(regs)		instruction_pointer(regs)
#define user_stack_pointer(regs)	((regs)->r1)

static inline long regs_return_value(struct pt_regs *regs)
{
	return regs->r3;
}

#endif /* __ASSEMBLY__ */
#endif /* _ASM_MICROBLAZE_PTRACE_H */
Tue Jul 19 12:40:29 PDT 2016
Fri Jul 22 15:50:30 PDT 2016
Sun, Jul 24, 2016  2:46:58 PM
Mon, Jul 25, 2016  9:21:25 PM
