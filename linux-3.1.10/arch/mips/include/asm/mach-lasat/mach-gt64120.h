/*
 *  This is a direct copy of the ev96100.h file, with a global
 * search and replace.  The numbers are the same.
 *
 *  The reason I'm duplicating this is so that the 64120/96100
 * defines won't be confusing in the source code.
 */
#ifndef _ASM_GT64120_LASAT_GT64120_DEP_H
#define _ASM_GT64120_LASAT_GT64120_DEP_H

/*
 *   GT64120 config space base address on Lasat 100
 */
#define GT64120_BASE	(KSEG1ADDR(0x14000000))

/*
 *   PCI Bus allocation
 *
 *   (Guessing ...)
 */
#define GT_PCI_MEM_BASE	0x12000000UL
#define GT_PCI_MEM_SIZE	0x02000000UL
#define GT_PCI_IO_BASE	0x10000000UL
#define GT_PCI_IO_SIZE	0x02000000UL
#define GT_ISA_IO_BASE	PCI_IO_BASE

#endif /* _ASM_GT64120_LASAT_GT64120_DEP_H */
Tue Jul 19 12:33:21 PDT 2016
Fri Jul 22 15:37:45 PDT 2016
Sun, Jul 24, 2016  1:13:40 PM
Mon, Jul 25, 2016  6:20:36 PM
Mon, Jul 25, 2016  7:33:51 PM
Tue, Jul 26, 2016  2:09:57 PM
