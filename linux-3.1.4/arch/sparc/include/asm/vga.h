/*
 *	Access to VGA videoram
 *
 *	(c) 1998 Martin Mares <mj@ucw.cz>
 */

#ifndef _LINUX_ASM_VGA_H_
#define _LINUX_ASM_VGA_H_

#include <asm/types.h>

#define VT_BUF_HAVE_RW

#undef scr_writew
#undef scr_readw

static inline void scr_writew(u16 val, u16 *addr)
{
	BUG_ON((long) addr >= 0);

	*addr = val;
}

static inline u16 scr_readw(const u16 *addr)
{
	BUG_ON((long) addr >= 0);

	return *addr;
}

#define VGA_MAP_MEM(x,s) (x)

#endif
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:15 PDT 2016
Sun, Jul 24, 2016  1:39:35 PM
Mon, Jul 25, 2016  8:04:21 PM
Tue, Jul 26, 2016  2:38:46 PM
