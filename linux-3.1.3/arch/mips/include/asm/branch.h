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
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:01 PM
Mon, Jul 25, 2016  6:40:12 PM
Mon, Jul 25, 2016  7:53:03 PM
Tue, Jul 26, 2016  2:28:11 PM
