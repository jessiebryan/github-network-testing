/*
 * This file defines the fixed addresses where userspace programs
 * can find atomic code sequences.
 *
 * Copyright 2007-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */
#ifndef __BFIN_ASM_FIXED_CODE_H__
#define __BFIN_ASM_FIXED_CODE_H__

#include <uapi/asm/fixed_code.h>

#ifndef __ASSEMBLY__
#include <linux/linkage.h>
#include <linux/ptrace.h>
extern asmlinkage void finish_atomic_sections(struct pt_regs *regs);
extern char fixed_code_start;
extern char fixed_code_end;
extern int atomic_xchg32(void);
extern int atomic_cas32(void);
extern int atomic_add32(void);
extern int atomic_sub32(void);
extern int atomic_ior32(void);
extern int atomic_and32(void);
extern int atomic_xor32(void);
extern void safe_user_instruction(void);
extern void sigreturn_stub(void);
#endif
#endif
Tue Jul 19 12:41:45 PDT 2016
Fri Jul 22 15:52:56 PDT 2016
Sun, Jul 24, 2016  3:04:27 PM
Mon, Jul 25, 2016  9:41:11 PM
