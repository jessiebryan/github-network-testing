/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1996, 1997, 1998, 2001 by Ralf Baechle
 */
#ifndef _ASM_BRANCH_H
#define _ASM_BRANCH_H

#include <asm/ptrace.h>

static inline int delay_slot(struct pt_regs *regs)
{
	return regs->cp0_cause & CAUSEF_BD;
}

static inline unsigned long exception_epc(struct pt_regs *regs)
{
	if (!delay_slot(regs))
		return regs->cp0_epc;

	return regs->cp0_epc + 4;
}

extern int __compute_return_epc(struct pt_regs *regs);

static inline int compute_return_epc(struct pt_regs *regs)
{
	if (!delay_slot(regs)) {
		regs->cp0_epc += 4;
		return 0;
	}

	return __compute_return_epc(regs);
}

#endif /* _ASM_BRANCH_H */
Tue Jul 19 12:36:45 PDT 2016
Fri Jul 22 15:43:19 PDT 2016
Sun, Jul 24, 2016  1:54:46 PM
Mon, Jul 25, 2016  8:22:15 PM
