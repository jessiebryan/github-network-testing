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
Tue Jul 19 12:45:42 PDT 2016
Fri Jul 22 16:00:01 PDT 2016
Sun, Jul 24, 2016  3:59:34 PM
Mon, Jul 25, 2016 10:42:39 PM
