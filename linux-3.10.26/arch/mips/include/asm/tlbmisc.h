#ifndef __ASM_TLBMISC_H
#define __ASM_TLBMISC_H

/*
 * - add_wired_entry() add a fixed TLB entry, and move wired register
 */
extern void add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
	unsigned long entryhi, unsigned long pagemask);

#endif /* __ASM_TLBMISC_H */
Tue Jul 19 12:51:35 PDT 2016
Fri Jul 22 16:11:07 PDT 2016
Sun, Jul 24, 2016  5:24:27 PM
Tue, Jul 26, 2016 12:16:48 AM
