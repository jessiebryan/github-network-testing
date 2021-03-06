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
Tue Jul 19 12:36:47 PDT 2016
Fri Jul 22 15:43:23 PDT 2016
Sun, Jul 24, 2016  1:55:19 PM
Mon, Jul 25, 2016  8:22:55 PM
