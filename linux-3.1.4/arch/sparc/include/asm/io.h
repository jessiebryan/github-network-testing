#ifndef ___ASM_SPARC_IO_H
#define ___ASM_SPARC_IO_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/io_64.h>
#else
#include <asm/io_32.h>
#endif

/*
 * Defines used for both SPARC32 and SPARC64
 */

/* Big endian versions of memory read/write routines */
#define readb_be(__addr)	__raw_readb(__addr)
#define readw_be(__addr)	__raw_readw(__addr)
#define readl_be(__addr)	__raw_readl(__addr)
#define writeb_be(__b, __addr)	__raw_writeb(__b, __addr)
#define writel_be(__w, __addr)	__raw_writel(__w, __addr)
#define writew_be(__l, __addr)	__raw_writew(__l, __addr)

#endif
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:14 PDT 2016
Sun, Jul 24, 2016  1:39:28 PM
