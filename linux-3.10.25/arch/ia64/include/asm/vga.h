/*
 *	Access to VGA videoram
 *
 *	(c) 1998 Martin Mares <mj@ucw.cz>
 *	(c) 1999 Asit Mallick <asit.k.mallick@intel.com>
 *	(c) 1999 Don Dugger <don.dugger@intel.com>
 */

#ifndef __ASM_IA64_VGA_H_
#define __ASM_IA64_VGA_H_

/*
 * On the PC, we can just recalculate addresses and then access the
 * videoram directly without any black magic.
 */

extern unsigned long vga_console_iobase;
extern unsigned long vga_console_membase;

#define VGA_MAP_MEM(x,s)	((unsigned long) ioremap_nocache(vga_console_membase + (x), s))

#define vga_readb(x)	(*(x))
#define vga_writeb(x,y)	(*(y) = (x))

#endif /* __ASM_IA64_VGA_H_ */
Tue Jul 19 12:50:53 PDT 2016
Fri Jul 22 16:09:45 PDT 2016
Sun, Jul 24, 2016  5:14:24 PM
Tue, Jul 26, 2016 12:05:42 AM
