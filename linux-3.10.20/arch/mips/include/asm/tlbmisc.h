#ifndef __ASM_TLBMISC_H
#define __ASM_TLBMISC_H

/*
 * - add_wired_entry() add a fixed TLB entry, and move wired register
 */
extern void add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
	unsigned long entryhi, unsigned long pagemask);

#endif /* __ASM_TLBMISC_H */
Tue Jul 19 12:47:43 PDT 2016
