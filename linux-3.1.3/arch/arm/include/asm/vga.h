#ifndef ASMARM_VGA_H
#define ASMARM_VGA_H

#include <linux/io.h>

extern unsigned long vga_base;

#define VGA_MAP_MEM(x,s)	(vga_base + (x))

#define vga_readb(x)	(*((volatile unsigned char *)x))
#define vga_writeb(x,y)	(*((volatile unsigned char *)y) = (x))

#endif
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:40 PDT 2016
Sun, Jul 24, 2016  1:28:08 PM
Mon, Jul 25, 2016  6:37:56 PM
Mon, Jul 25, 2016  7:50:50 PM
Tue, Jul 26, 2016  2:26:04 PM
