/*
 * Copyright 2003 PathScale, Inc.
 *
 * Licensed under the GPL
 */

#ifndef __UM_PDA_X86_64_H
#define __UM_PDA_X86_64_H

/* XXX */
struct foo {
	unsigned int __softirq_pending;
	unsigned int __nmi_count;
};

extern struct foo me;

#define read_pda(me) (&me)

#endif

Tue Jul 19 12:36:17 PDT 2016
Fri Jul 22 15:42:22 PDT 2016
Sun, Jul 24, 2016  1:47:56 PM
