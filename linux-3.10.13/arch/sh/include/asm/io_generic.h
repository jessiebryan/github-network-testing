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
Tue Jul 19 12:43:19 PDT 2016
Fri Jul 22 15:55:34 PDT 2016
Sun, Jul 24, 2016  3:24:58 PM
Mon, Jul 25, 2016 10:04:11 PM
