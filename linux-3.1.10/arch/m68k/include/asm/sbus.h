/*
 * some sbus structures and macros to make usage of sbus drivers possible
 */

#ifndef __M68K_SBUS_H
#define __M68K_SBUS_H

struct sbus_dev {
	struct {
		unsigned int which_io;
		unsigned int phys_addr;
	} reg_addrs[1];
};

/* sbus IO functions stolen from include/asm-sparc/io.h for the serial driver */
/* No SBUS on the Sun3, kludge -- sam */

static inline void _sbus_writeb(unsigned char val, unsigned long addr)
{
	*(volatile unsigned char *)addr = val;
}

static inline unsigned char _sbus_readb(unsigned long addr)
{
	return *(volatile unsigned char *)addr;
}

static inline void _sbus_writel(unsigned long val, unsigned long addr)
{
	*(volatile unsigned long *)addr = val;

}

extern inline unsigned long _sbus_readl(unsigned long addr)
{
	return *(volatile unsigned long *)addr;
}


#define sbus_readb(a) _sbus_readb((unsigned long)a)
#define sbus_writeb(v, a) _sbus_writeb(v, (unsigned long)a)
#define sbus_readl(a) _sbus_readl((unsigned long)a)
#define sbus_writel(v, a) _sbus_writel(v, (unsigned long)a)

#endif
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:43 PDT 2016
Sun, Jul 24, 2016  1:13:24 PM
Mon, Jul 25, 2016  6:20:17 PM
Mon, Jul 25, 2016  7:33:32 PM
Tue, Jul 26, 2016  2:09:40 PM
