#ifndef ASMARM_VGA_H
#define ASMARM_VGA_H

#include <linux/io.h>

extern unsigned long vga_base;

#define VGA_MAP_MEM(x,s)	(vga_base + (x))

#define vga_readb(x)	(*((volatile unsigned char *)x))
#define vga_writeb(x,y)	(*((volatile unsigned char *)y) = (x))

#endif
Tue Jul 19 12:48:12 PDT 2016
Fri Jul 22 16:04:42 PDT 2016
Sun, Jul 24, 2016  4:35:55 PM
Mon, Jul 25, 2016 11:23:03 PM
