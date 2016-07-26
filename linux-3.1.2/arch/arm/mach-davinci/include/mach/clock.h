/*
 * arch/arm/mach-davinci/include/mach/clock.h
 *
 * Clock control driver for DaVinci - header file
 *
 * Authors: Vladimir Barinov <source@mvista.com>
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ASM_ARCH_DAVINCI_CLOCK_H
#define __ASM_ARCH_DAVINCI_CLOCK_H

struct clk;

extern int clk_register(struct clk *clk);
extern void clk_unregister(struct clk *clk);

#endif
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:57 PM
Mon, Jul 25, 2016  6:28:08 PM
Mon, Jul 25, 2016  7:41:14 PM
Tue, Jul 26, 2016  2:16:59 PM
