/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2005, 06 by Ralf Baechle (ralf@linux-mips.org)
 * Copyright (C) 2005 MIPS Technologies, Inc.
 */
#ifndef _ASM_ABI_H
#define _ASM_ABI_H

#include <asm/signal.h>
#include <asm/siginfo.h>

struct mips_abi {
	int (* const setup_frame)(void *sig_return, struct k_sigaction *ka,
	                          struct pt_regs *regs, int signr,
	                          sigset_t *set);
	const unsigned long	signal_return_offset;
	int (* const setup_rt_frame)(void *sig_return, struct k_sigaction *ka,
	                       struct pt_regs *regs, int signr,
	                       sigset_t *set, siginfo_t *info);
	const unsigned long	rt_signal_return_offset;
	const unsigned long	restart;
};

#endif /* _ASM_ABI_H */
Tue Jul 19 12:35:37 PDT 2016
Fri Jul 22 15:41:05 PDT 2016
Sun, Jul 24, 2016  1:38:16 PM
Mon, Jul 25, 2016  8:02:48 PM
