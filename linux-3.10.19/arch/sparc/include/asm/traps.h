/*
 * traps.h:  Format of entries for the Sparc trap table.
 *
 * Copyright (C) 1995 David S. Miller (davem@caip.rutgers.edu)
 */
#ifndef _SPARC_TRAPS_H
#define _SPARC_TRAPS_H

#include <uapi/asm/traps.h>

#ifndef __ASSEMBLY__
/* This is for V8 compliant Sparc CPUS */
struct tt_entry {
	unsigned long inst_one;
	unsigned long inst_two;
	unsigned long inst_three;
	unsigned long inst_four;
};

/* We set this to _start in system setup. */
extern struct tt_entry *sparc_ttable;

#endif /* !(__ASSEMBLY__) */
#endif /* !(_SPARC_TRAPS_H) */
Tue Jul 19 12:47:09 PDT 2016
Fri Jul 22 16:02:43 PDT 2016
Sun, Jul 24, 2016  4:20:33 PM
Mon, Jul 25, 2016 11:06:01 PM
