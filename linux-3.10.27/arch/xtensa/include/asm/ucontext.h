/*
 * include/asm-xtensa/ucontext.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_UCONTEXT_H
#define _XTENSA_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* _XTENSA_UCONTEXT_H */
Tue Jul 19 12:52:20 PDT 2016
Fri Jul 22 16:12:37 PDT 2016
Sun, Jul 24, 2016  5:35:20 PM
Tue, Jul 26, 2016 12:28:48 AM
