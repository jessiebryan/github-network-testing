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
Tue Jul 19 12:42:35 PDT 2016
Fri Jul 22 15:54:13 PDT 2016
Sun, Jul 24, 2016  3:14:23 PM
Mon, Jul 25, 2016  9:52:25 PM
