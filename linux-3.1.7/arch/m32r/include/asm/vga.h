#ifndef _ASM_M32R_VGA_H
#define _ASM_M32R_VGA_H

/*
 *	Access to VGA videoram
 *
 *	(c) 1998 Martin Mares <mj@ucw.cz>
 */

/*
 *	On the PC, we can just recalculate addresses and then
 *	access the videoram directly without any black magic.
 */

#define VGA_MAP_MEM(x,s) (unsigned long)phys_to_virt(x)

#define vga_readb(x) (*(x))
#define vga_writeb(x,y) (*(y) = (x))

#endif /* _ASM_M32R_VGA_H */
Tue Jul 19 12:36:44 PDT 2016
Fri Jul 22 15:43:17 PDT 2016
Sun, Jul 24, 2016  1:54:32 PM
Mon, Jul 25, 2016  8:21:59 PM
