/*
 * include/asm-xtensa/vga.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_VGA_H
#define _XTENSA_VGA_H

#define VGA_MAP_MEM(x,s) (unsigned long)phys_to_virt(x)

#define vga_readb(x)	(*(x))
#define vga_writeb(x,y)	(*(y) = (x))

#endif
Tue Jul 19 12:36:19 PDT 2016
Fri Jul 22 15:42:26 PDT 2016
Sun, Jul 24, 2016  1:48:20 PM
Mon, Jul 25, 2016  8:14:43 PM
