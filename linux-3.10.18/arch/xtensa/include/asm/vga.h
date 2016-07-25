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
Tue Jul 19 12:46:31 PDT 2016
Fri Jul 22 16:01:37 PDT 2016
Sun, Jul 24, 2016  4:11:54 PM
