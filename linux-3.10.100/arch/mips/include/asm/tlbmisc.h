#ifndef __ASM_TLBMISC_H
#define __ASM_TLBMISC_H

/*
 * - add_wired_entry() add a fixed TLB entry, and move wired register
 */
extern void add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
	unsigned long entryhi, unsigned long pagemask);

#endif /* __ASM_TLBMISC_H */
Tue Jul 19 12:39:52 PDT 2016
Fri Jul 22 15:49:17 PDT 2016
Sun, Jul 24, 2016  2:38:10 PM
Mon, Jul 25, 2016  9:11:34 PM
