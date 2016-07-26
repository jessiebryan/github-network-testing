/* mb93093-fpga-irqs.h: MB93093 CPU board FPGA IRQs
 *
 * Copyright (C) 2004 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _ASM_MB93093_FPGA_IRQS_H
#define _ASM_MB93093_FPGA_IRQS_H

#include <asm/irq.h>

#ifndef __ASSEMBLY__

/* IRQ IDs presented to drivers */
enum {
	IRQ_FPGA_PUSH_BUTTON_SW1_5		= IRQ_BASE_FPGA + 8,
	IRQ_FPGA_ROCKER_C_SW8			= IRQ_BASE_FPGA + 9,
	IRQ_FPGA_ROCKER_C_SW9			= IRQ_BASE_FPGA + 10,
};


#endif /* !__ASSEMBLY__ */

#endif /* _ASM_MB93093_FPGA_IRQS_H */
Tue Jul 19 12:33:54 PDT 2016
Fri Jul 22 15:38:45 PDT 2016
Sun, Jul 24, 2016  1:21:14 PM
Mon, Jul 25, 2016  6:29:40 PM
Mon, Jul 25, 2016  7:42:45 PM
