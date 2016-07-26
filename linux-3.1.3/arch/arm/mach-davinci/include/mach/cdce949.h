/*
 * TI CDCE949 off-chip clock synthesizer support
 *
 * 2009 (C) Texas Instruments, Inc. http://www.ti.com/
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#ifndef _MACH_DAVINCI_CDCE949_H
#define _MACH_DAVINCI_CDCE949_H

#include <linux/clk.h>

#include <mach/clock.h>

int cdce_set_rate(struct clk *clk, unsigned long rate);

#endif
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:40 PDT 2016
Sun, Jul 24, 2016  1:28:13 PM
Mon, Jul 25, 2016  6:38:02 PM
