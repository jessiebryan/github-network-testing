/*
 *  This is a direct copy of the ev96100.h file, with a global
 * search and replace.	The numbers are the same.
 *
 *  The reason I'm duplicating this is so that the 64120/96100
 * defines won't be confusing in the source code.
 */
#ifndef _ASM_MACH_MIPS_MACH_GT64120_DEP_H
#define _ASM_MACH_MIPS_MACH_GT64120_DEP_H

#define MIPS_GT_BASE	0x1be00000

extern unsigned long _pcictrl_gt64120;
/*
 *   GT64120 config space base address
 */
#define GT64120_BASE	_pcictrl_gt64120

#endif /* _ASM_MACH_MIPS_MACH_GT64120_DEP_H */
Tue Jul 19 12:52:52 PDT 2016
Fri Jul 22 16:13:39 PDT 2016
Sun, Jul 24, 2016  5:42:52 PM
Tue, Jul 26, 2016 12:37:07 AM
