/*
 *  Copyright (C) 2004, 2006, 2009, 2010 Texas Instruments Incorporated
 *  Author: Aurelien Jacquiot (aurelien.jacquiot@jaluna.com)
 *
 *  Updated for 2.6.34: Mark Salter <msalter@redhat.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */
#ifndef _ASM_C6X_PTRACE_H
#define _ASM_C6X_PTRACE_H

#include <uapi/asm/ptrace.h>

#ifndef __ASSEMBLY__
#ifdef _BIG_ENDIAN
#else
#endif

#include <linux/linkage.h>

#define user_mode(regs)	((((regs)->tsr) & 0x40) != 0)

#define instruction_pointer(regs) ((regs)->pc)
#define profile_pc(regs) instruction_pointer(regs)
#define user_stack_pointer(regs) ((regs)->sp)

extern void show_regs(struct pt_regs *);

extern asmlinkage unsigned long syscall_trace_entry(struct pt_regs *regs);
extern asmlinkage void syscall_trace_exit(struct pt_regs *regs);

#endif /* __ASSEMBLY__ */
#endif /* _ASM_C6X_PTRACE_H */
Tue Jul 19 12:52:08 PDT 2016
Fri Jul 22 16:12:14 PDT 2016
Sun, Jul 24, 2016  5:32:32 PM
Tue, Jul 26, 2016 12:25:43 AM
