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

extern unsigned char ledstate;

static __inline__ void blinken_leds(int on, int off)
{
	if (MACH_IS_HP300)
	{
		ledstate |= on;
		ledstate &= ~off;
		out_8(HP300_LEDS, ~ledstate);
	}
}

#endif
Tue Jul 19 12:37:58 PDT 2016
Fri Jul 22 15:45:30 PDT 2016
Sun, Jul 24, 2016  2:11:02 PM
Mon, Jul 25, 2016  8:41:23 PM
