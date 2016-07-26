/* arch/arm/plat-samsung/include/plat/irq-uart.h
 *
 * Copyright (c) 2010 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * Header file for Samsung SoC UART IRQ demux for S3C64XX and later
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

struct s3c_uart_irq {
	void __iomem	*regs;
	unsigned int	 base_irq;
	unsigned int	 parent_irq;
};

extern void s3c_init_uart_irqs(struct s3c_uart_irq *irq, unsigned int nr_irqs);

Tue Jul 19 12:52:07 PDT 2016
Fri Jul 22 16:12:11 PDT 2016
Sun, Jul 24, 2016  5:32:12 PM
Tue, Jul 26, 2016 12:25:21 AM
