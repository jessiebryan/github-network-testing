/* 
 * Copyright (C) 2000 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __SYS_SIGCONTEXT_X86_H
#define __SYS_SIGCONTEXT_X86_H

extern void get_regs_from_mc(struct uml_pt_regs *, mcontext_t *);

#ifdef __i386__

#define GET_FAULTINFO_FROM_MC(fi, mc) \
	{ \
		(fi).cr2 = (mc)->cr2; \
		(fi).error_code = (mc)->gregs[REG_ERR]; \
		(fi).trap_no = (mc)->gregs[REG_TRAPNO]; \
	}

#else

#define GET_FAULTINFO_FROM_MC(fi, mc) \
	{ \
		(fi).cr2 = (mc)->gregs[REG_CR2]; \
		(fi).error_code = (mc)->gregs[REG_ERR]; \
		(fi).trap_no = (mc)->gregs[REG_TRAPNO]; \
	}

#endif

#endif
Tue Jul 19 12:43:23 PDT 2016
Fri Jul 22 15:55:40 PDT 2016
Sun, Jul 24, 2016  3:25:44 PM
Mon, Jul 25, 2016 10:05:02 PM
