#ifndef __ASM_TRAPS_H
#define __ASM_TRAPS_H

#ifdef __KERNEL__
struct pt_regs;

/* traps.c */
void parisc_terminate(char *msg, struct pt_regs *regs,
		int code, unsigned long offset);

/* mm/fault.c */
void do_page_fault(struct pt_regs *regs, unsigned long code,
		unsigned long address);
#endif

#endif
Tue Jul 19 12:39:15 PDT 2016
Fri Jul 22 15:48:01 PDT 2016
Sun, Jul 24, 2016  2:29:12 PM
Mon, Jul 25, 2016  9:01:36 PM
