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

Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:12 PM
Mon, Jul 25, 2016  6:32:01 PM
Mon, Jul 25, 2016  7:45:03 PM
Tue, Jul 26, 2016  2:20:38 PM
