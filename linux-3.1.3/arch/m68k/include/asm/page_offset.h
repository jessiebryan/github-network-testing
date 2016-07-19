/* This handles the memory map.. */

#ifdef CONFIG_MMU
#ifndef CONFIG_SUN3
#define PAGE_OFFSET_RAW		0x00000000
#else
#define PAGE_OFFSET_RAW		0x0E000000
#endif
#else
#define	PAGE_OFFSET_RAW		CONFIG_RAMBASE
#endif
Tue Jul 19 12:34:54 PDT 2016
