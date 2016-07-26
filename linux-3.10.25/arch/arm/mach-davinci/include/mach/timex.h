/*
 * DaVinci timer defines
 *
 * Author: Kevin Hilman, MontaVista Software, Inc. <source@mvista.com>
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef __ASM_ARCH_TIMEX_H
#define __ASM_ARCH_TIMEX_H

/*
 * Alert: Not all timers of the DaVinci family run at a frequency of 27MHz,
 * but we should be fine as long as CLOCK_TICK_RATE or LATCH (see include/
 * linux/jiffies.h) are not used directly in code. Currently none of the
 * code relevant to DaVinci platform depends on these values directly.
 */
#define CLOCK_TICK_RATE 27000000

#endif /* __ASM_ARCH_TIMEX_H__ */
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:34 PDT 2016
Sun, Jul 24, 2016  5:13:04 PM
Tue, Jul 26, 2016 12:04:13 AM
