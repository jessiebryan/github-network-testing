/*
 * arch/arm/plat-orion/include/plat/time.h
 *
 * Marvell Orion SoC time handling.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_TIME_H
#define __PLAT_TIME_H

void orion_time_set_base(u32 timer_base);

void orion_time_init(u32 bridge_base, u32 bridge_timer1_clr_mask,
		     unsigned int irq, unsigned int tclk);


#endif
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:28:59 PM
Mon, Jul 25, 2016  6:38:57 PM
Mon, Jul 25, 2016  7:51:50 PM
Tue, Jul 26, 2016  2:27:01 PM
