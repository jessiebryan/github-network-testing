/*
 * arch/arm/plat-orion/include/plat/irq.h
 *
 * Marvell Orion SoC IRQ handling.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_IRQ_H
#define __PLAT_IRQ_H

void orion_irq_init(unsigned int irq_start, void __iomem *maskaddr);
void __init orion_dt_init_irq(void);
#endif
Tue Jul 19 12:45:06 PDT 2016
Fri Jul 22 15:58:50 PDT 2016
Sun, Jul 24, 2016  3:50:21 PM
Mon, Jul 25, 2016 10:32:25 PM
