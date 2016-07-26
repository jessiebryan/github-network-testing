#ifndef __ASM_TLBMISC_H
#define __ASM_TLBMISC_H

/*
 * - add_wired_entry() add a fixed TLB entry, and move wired register
 */
extern void add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
	unsigned long entryhi, unsigned long pagemask);

#endif /* __ASM_TLBMISC_H */
Tue Jul 19 12:40:31 PDT 2016
Fri Jul 22 15:50:33 PDT 2016
Sun, Jul 24, 2016  2:47:23 PM
Mon, Jul 25, 2016  9:21:55 PM
