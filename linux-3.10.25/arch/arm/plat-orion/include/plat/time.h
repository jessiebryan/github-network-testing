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

void orion_time_set_base(void __iomem *timer_base);

void orion_time_init(void __iomem *bridge_base, u32 bridge_timer1_clr_mask,
		     unsigned int irq, unsigned int tclk);


#endif
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:38 PDT 2016
Sun, Jul 24, 2016  5:13:34 PM
Tue, Jul 26, 2016 12:04:45 AM
