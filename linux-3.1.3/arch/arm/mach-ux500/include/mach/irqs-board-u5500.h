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
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:49 PM
Mon, Jul 25, 2016  6:38:46 PM
Mon, Jul 25, 2016  7:51:39 PM
Tue, Jul 26, 2016  2:26:51 PM
