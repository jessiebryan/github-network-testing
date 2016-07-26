/*
** asm/blinken.h -- m68k blinkenlights support (currently hp300 only)
**
** (c) 1998 Phil Blundell <philb@gnu.org>
**
** This file is subject to the terms and conditions of the GNU General Public
** License.  See the file COPYING in the main directory of this archive
** for more details.
**
*/

#ifndef _M68K_BLINKEN_H
#define _M68K_BLINKEN_H

#include <asm/setup.h>
#include <asm/io.h>

#define HP300_LEDS		0xf001ffff

extern unsigned char hp300_ledstate;

static __inline__ void blinken_leds(int on, int off)
{
	if (MACH_IS_HP300)
	{
		hp300_ledstate |= on;
		hp300_ledstate &= ~off;
		out_8(HP300_LEDS, ~hp300_ledstate);
	}
}

#endif
Tue Jul 19 12:53:29 PDT 2016
Fri Jul 22 16:14:51 PDT 2016
Sun, Jul 24, 2016  5:51:47 PM
Tue, Jul 26, 2016 12:46:58 AM
