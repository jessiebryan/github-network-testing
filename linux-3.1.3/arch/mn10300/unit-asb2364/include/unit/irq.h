/* ASB2364 FPGA irq numbers
 *
 * Copyright (C) 2010 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _UNIT_IRQ_H
#define _UNIT_IRQ_H

#ifndef __ASSEMBLY__

#ifdef CONFIG_SMP
#define NR_CPU_IRQS	GxICR_NUM_EXT_IRQS
#else
#define NR_CPU_IRQS	GxICR_NUM_IRQS
#endif

enum {
	FPGA_LAN_IRQ	= NR_CPU_IRQS,
	FPGA_UART_IRQ,
	FPGA_I2C_IRQ,
	FPGA_USB_IRQ,
	FPGA_RESERVED_IRQ,
	FPGA_FPGA_IRQ,
	NR_IRQS
};

extern void __init irq_fpga_init(void);

#endif /* !__ASSEMBLY__ */
#endif /* _UNIT_IRQ_H */
Tue Jul 19 12:34:57 PDT 2016
Fri Jul 22 15:40:00 PDT 2016
Sun, Jul 24, 2016  1:30:29 PM
Mon, Jul 25, 2016  6:40:45 PM
Mon, Jul 25, 2016  7:53:35 PM
Tue, Jul 26, 2016  2:28:41 PM
