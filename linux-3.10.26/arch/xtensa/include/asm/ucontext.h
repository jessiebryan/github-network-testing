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
Tue Jul 19 12:51:42 PDT 2016
Fri Jul 22 16:11:19 PDT 2016
Sun, Jul 24, 2016  5:26:01 PM
Tue, Jul 26, 2016 12:18:31 AM
