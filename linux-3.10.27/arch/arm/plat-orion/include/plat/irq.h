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
Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:11 PDT 2016
Sun, Jul 24, 2016  5:32:11 PM
Tue, Jul 26, 2016 12:25:19 AM
