#ifndef ASMARM_VGA_H
#define ASMARM_VGA_H

#include <linux/io.h>

extern unsigned long vga_base;

#define VGA_MAP_MEM(x,s)	(vga_base + (x))

#define vga_readb(x)	(*((volatile unsigned char *)x))
#define vga_writeb(x,y)	(*((volatile unsigned char *)y) = (x))

#endif
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:31 PDT 2016
Sun, Jul 24, 2016  2:54:28 PM
Mon, Jul 25, 2016  9:29:54 PM
