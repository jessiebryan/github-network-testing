#ifndef _CRIS_ARCH_PAGE_H
#define _CRIS_ARCH_PAGE_H


#ifdef __KERNEL__

/* This handles the memory map.. */
#ifdef CONFIG_CRIS_LOW_MAP
#define PAGE_OFFSET		KSEG_6   /* kseg_6 is mapped to physical ram */
#else
#define PAGE_OFFSET		KSEG_C   /* kseg_c is mapped to physical ram */
#endif

/* macros to convert between really physical and virtual addresses
 * by stripping a selected bit, we can convert between KSEG_x and
 * 0x40000000 where the DRAM really resides
 */

#ifdef CONFIG_CRIS_LOW_MAP
/* we have DRAM virtually at 0x6 */
#define __pa(x)                 ((unsigned long)(x) & 0xdfffffff)
#define __va(x)                 ((void *)((unsigned long)(x) | 0x20000000))
#else
/* we have DRAM virtually at 0xc */
#define __pa(x)                 ((unsigned long)(x) & 0x7fffffff)
#define __va(x)                 ((void *)((unsigned long)(x) | 0x80000000))
#endif

#endif
#endif
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:17 PM
Mon, Jul 25, 2016  6:39:19 PM
Mon, Jul 25, 2016  7:52:11 PM
Tue, Jul 26, 2016  2:27:21 PM
