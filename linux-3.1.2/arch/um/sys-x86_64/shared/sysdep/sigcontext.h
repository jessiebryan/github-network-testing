/*
 * Copyright 2003 PathScale, Inc.
 *
 * Licensed under the GPL
 */

#ifndef __SYSDEP_X86_64_SIGCONTEXT_H
#define __SYSDEP_X86_64_SIGCONTEXT_H

#include <sysdep/sc.h>

#define IP_RESTART_SYSCALL(ip) ((ip) -= 2)

#define GET_FAULTINFO_FROM_SC(fi, sc) \
	{ \
		(fi).cr2 = SC_CR2(sc); \
		(fi).error_code = SC_ERR(sc); \
		(fi).trap_no = SC_TRAPNO(sc); \
	}

/* This is Page Fault */
#define SEGV_IS_FIXABLE(fi)	((fi)->trap_no == 14)

/* No broken SKAS API, which doesn't pass trap_no, here. */
#define SEGV_MAYBE_FIXABLE(fi)	0

#endif
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:16 PM
Mon, Jul 25, 2016  6:32:06 PM
Mon, Jul 25, 2016  7:45:08 PM
Tue, Jul 26, 2016  2:20:43 PM
