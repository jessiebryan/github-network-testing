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
Tue Jul 19 12:33:57 PDT 2016
Fri Jul 22 15:38:49 PDT 2016
Sun, Jul 24, 2016  1:21:44 PM
Mon, Jul 25, 2016  6:30:16 PM
Mon, Jul 25, 2016  7:43:20 PM
Tue, Jul 26, 2016  2:19:01 PM
