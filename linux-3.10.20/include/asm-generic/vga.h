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
Tue Jul 19 12:48:01 PDT 2016
Fri Jul 22 16:04:21 PDT 2016
Sun, Jul 24, 2016  4:33:11 PM
Mon, Jul 25, 2016 11:20:00 PM
