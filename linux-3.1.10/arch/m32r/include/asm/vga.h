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
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:42 PDT 2016
Sun, Jul 24, 2016  1:13:18 PM
Mon, Jul 25, 2016  6:20:10 PM
Mon, Jul 25, 2016  7:33:25 PM
Tue, Jul 26, 2016  2:09:33 PM
