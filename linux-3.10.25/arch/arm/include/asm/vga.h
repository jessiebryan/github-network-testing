#ifndef ASMARM_VGA_H
#define ASMARM_VGA_H

#include <linux/io.h>

extern unsigned long vga_base;

#define VGA_MAP_MEM(x,s)	(vga_base + (x))

#define vga_readb(x)	(*((volatile unsigned char *)x))
#define vga_writeb(x,y)	(*((volatile unsigned char *)y) = (x))

#endif
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:34 PDT 2016
Sun, Jul 24, 2016  5:12:59 PM
Tue, Jul 26, 2016 12:04:08 AM
