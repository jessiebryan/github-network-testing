/*
 * Copyright (C) ST-Ericsson SA 2010
 *
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef __MACH_IRQS_BOARD_U5500_H
#define __MACH_IRQS_BOARD_U5500_H

#define AB5500_NR_IRQS		5
#define IRQ_AB5500_BASE		IRQ_BOARD_START
#define IRQ_AB5500_END		(IRQ_AB5500_BASE + AB5500_NR_IRQS)

#define U5500_IRQ_END		IRQ_AB5500_END

#if IRQ_BOARD_END < U5500_IRQ_END
#undef IRQ_BOARD_END
#define IRQ_BOARD_END		U5500_IRQ_END
#endif

#endif
Tue Jul 19 12:35:32 PDT 2016
Fri Jul 22 15:40:54 PDT 2016
Sun, Jul 24, 2016  1:37:05 PM
Mon, Jul 25, 2016  8:01:23 PM
Tue, Jul 26, 2016  2:35:58 PM
