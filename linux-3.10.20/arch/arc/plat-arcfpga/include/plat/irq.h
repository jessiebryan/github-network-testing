/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * vineetg: Feb 2009
 *  -For AA4 board, IRQ assignments to peripherals
 */

#ifndef __PLAT_IRQ_H
#define __PLAT_IRQ_H

#define UART0_IRQ	5
#define UART1_IRQ	10
#define UART2_IRQ	11

#define VMAC_IRQ	6

#define IDE_IRQ		13
#define PCI_IRQ		14
#define PS2_IRQ		15

#ifdef CONFIG_SMP
#define IDU_INTERRUPT_0 16
#endif

extern void __init plat_fpga_init_IRQ(void);

#endif
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:30 PDT 2016
Sun, Jul 24, 2016  4:26:34 PM
Mon, Jul 25, 2016 11:12:39 PM
