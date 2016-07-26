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
Tue Jul 19 12:33:53 PDT 2016
Fri Jul 22 15:38:43 PDT 2016
Sun, Jul 24, 2016  1:20:55 PM
Mon, Jul 25, 2016  6:29:18 PM
Mon, Jul 25, 2016  7:42:23 PM
Tue, Jul 26, 2016  2:18:06 PM
