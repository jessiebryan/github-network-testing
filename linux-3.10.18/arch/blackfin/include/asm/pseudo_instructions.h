/*
 * header file for pseudo instructions
 *
 * Copyright 2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BLACKFIN_PSEUDO_
#define _BLACKFIN_PSEUDO_

#include <linux/types.h>
#include <asm/ptrace.h>

extern bool execute_pseudodbg_assert(struct pt_regs *fp, unsigned int opcode);
extern bool execute_pseudodbg(struct pt_regs *fp, unsigned int opcode);

#endif
Tue Jul 19 12:46:20 PDT 2016
Fri Jul 22 16:01:12 PDT 2016
Sun, Jul 24, 2016  4:09:01 PM
