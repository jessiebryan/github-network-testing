/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ASM_ARC_SIGCONTEXT_H
#define _ASM_ARC_SIGCONTEXT_H

#include <asm/ptrace.h>

/*
 * Signal context structure - contains all info to do with the state
 * before the signal handler was invoked.
 */
struct sigcontext {
	struct user_regs_struct regs;
};

#endif /* _ASM_ARC_SIGCONTEXT_H */
Tue Jul 19 12:40:21 PDT 2016
Fri Jul 22 15:50:14 PDT 2016
Sun, Jul 24, 2016  2:45:08 PM
Mon, Jul 25, 2016  9:19:21 PM
