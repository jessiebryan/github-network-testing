/*
 *	Access to VGA videoram
 *
 *	(c) 1998 Martin Mares <mj@ucw.cz>
 */
#ifndef __ASM_GENERIC_VGA_H
#define __ASM_GENERIC_VGA_H

/*
 *	On most architectures that support VGA, we can just
 *	recalculate addresses and then access the videoram
 *	directly without any black magic.
 *
 *	Everyone else needs to ioremap the address and use
 *	proper I/O accesses.
 */
#ifndef VGA_MAP_MEM
#define VGA_MAP_MEM(x, s) (unsigned long)phys_to_virt(x)
#endif

#define vga_readb(x) (*(x))
#define vga_writeb(x, y) (*(y) = (x))

#endif /* _ASM_GENERIC_VGA_H */
Tue Jul 19 12:49:56 PDT 2016
Fri Jul 22 16:07:59 PDT 2016
Sun, Jul 24, 2016  5:00:53 PM
Mon, Jul 25, 2016 11:50:50 PM
