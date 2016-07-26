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
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:11 PDT 2016
Sun, Jul 24, 2016  1:31:51 PM
Mon, Jul 25, 2016  7:55:13 PM
