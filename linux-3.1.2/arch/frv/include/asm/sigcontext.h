/* sigcontext.h: FRV signal context
 *
 * Copyright (C) 2003 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */
#ifndef _ASM_SIGCONTEXT_H
#define _ASM_SIGCONTEXT_H

#include <asm/registers.h>

/*
 * Signal context structure - contains all info to do with the state
 * before the signal handler was invoked.  Note: only add new entries
 * to the end of the structure.
 */
struct sigcontext {
	struct user_context	sc_context;
	unsigned long		sc_oldmask; 	/* old sigmask */
} __attribute__((aligned(8)));

#endif
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:46 PDT 2016
Sun, Jul 24, 2016  1:21:15 PM
Mon, Jul 25, 2016  6:29:41 PM
Mon, Jul 25, 2016  7:42:46 PM
Tue, Jul 26, 2016  2:18:28 PM
