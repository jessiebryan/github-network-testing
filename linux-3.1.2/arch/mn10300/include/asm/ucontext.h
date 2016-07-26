/* MN10300 User context
 *
 * Copyright (C) 2007 Matsushita Electric Industrial Co., Ltd.
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_UCONTEXT_H
#define _ASM_UCONTEXT_H

struct ucontext {
	unsigned long	  uc_flags;
	struct ucontext  *uc_link;
	stack_t		  uc_stack;
	struct sigcontext uc_mcontext;
	sigset_t	  uc_sigmask;	/* mask last for extensibility */
};

#endif /* _ASM_UCONTEXT_H */
Tue Jul 19 12:33:58 PDT 2016
Fri Jul 22 15:38:53 PDT 2016
Sun, Jul 24, 2016  1:22:12 PM
Mon, Jul 25, 2016  6:30:50 PM
Mon, Jul 25, 2016  7:43:53 PM
Tue, Jul 26, 2016  2:19:32 PM
