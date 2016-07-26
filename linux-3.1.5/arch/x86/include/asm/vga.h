/*
 *	Access to VGA videoram
 *
 *	(c) 1998 Martin Mares <mj@ucw.cz>
 */

#ifndef _ASM_X86_VGA_H
#define _ASM_X86_VGA_H

/*
 *	On the PC, we can just recalculate addresses and then
 *	access the videoram directly without any black magic.
 */

#define VGA_MAP_MEM(x, s) (unsigned long)phys_to_virt(x)

#define vga_readb(x) (*(x))
#define vga_writeb(x, y) (*(y) = (x))

#endif /* _ASM_X86_VGA_H */
Tue Jul 19 12:36:19 PDT 2016
Fri Jul 22 15:42:25 PDT 2016
Sun, Jul 24, 2016  1:48:14 PM
Mon, Jul 25, 2016  8:14:35 PM
