/*
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_SIGCONTEXT_H
#define _ASM_MICROBLAZE_SIGCONTEXT_H

/* FIXME should be linux/ptrace.h */
#include <asm/ptrace.h>

struct sigcontext {
	struct pt_regs regs;
	unsigned long oldmask;
};

#endif /* _ASM_MICROBLAZE_SIGCONTEXT_H */
Tue Jul 19 12:35:37 PDT 2016
Fri Jul 22 15:41:05 PDT 2016
Sun, Jul 24, 2016  1:38:14 PM
Mon, Jul 25, 2016  8:02:46 PM
Tue, Jul 26, 2016  2:37:16 PM
