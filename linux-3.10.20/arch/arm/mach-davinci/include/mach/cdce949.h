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
Tue Jul 19 12:47:34 PDT 2016
Fri Jul 22 16:03:31 PDT 2016
Sun, Jul 24, 2016  4:26:45 PM
Mon, Jul 25, 2016 11:12:51 PM
