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

Tue Jul 19 12:35:08 PDT 2016
Fri Jul 22 15:40:08 PDT 2016
Sun, Jul 24, 2016  1:31:27 PM
Mon, Jul 25, 2016  7:54:43 PM
Tue, Jul 26, 2016  2:29:46 PM
