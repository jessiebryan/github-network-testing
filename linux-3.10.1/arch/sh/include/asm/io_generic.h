/*
 * Trivial I/O routine definitions, intentionally meant to be included
 * multiple times. Ugly I/O routine concatenation helpers taken from
 * alpha. Must be included _before_ io.h to avoid preprocessor-induced
 * routine mismatch.
 */
#define IO_CONCAT(a,b)	_IO_CONCAT(a,b)
#define _IO_CONCAT(a,b)	a ## _ ## b

#ifndef __IO_PREFIX
#error "Don't include this header without a valid system prefix"
#endif

void __iomem *IO_CONCAT(__IO_PREFIX,ioport_map)(unsigned long addr, unsigned int size);
void IO_CONCAT(__IO_PREFIX,ioport_unmap)(void __iomem *addr);
void IO_CONCAT(__IO_PREFIX,mem_init)(void);

#undef __IO_PREFIX
Tue Jul 19 12:38:38 PDT 2016
Fri Jul 22 15:46:49 PDT 2016
Sun, Jul 24, 2016  2:20:30 PM
Mon, Jul 25, 2016  8:51:53 PM
