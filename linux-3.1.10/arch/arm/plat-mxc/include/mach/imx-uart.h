/*
 * Copyright (C) 2008 by Sascha Hauer <kernel@pengutronix.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef ASMARM_ARCH_UART_H
#define ASMARM_ARCH_UART_H

#define IMXUART_HAVE_RTSCTS (1<<0)
#define IMXUART_IRDA        (1<<1)

struct imxuart_platform_data {
	int (*init)(struct platform_device *pdev);
	void (*exit)(struct platform_device *pdev);
	unsigned int flags;
	void (*irda_enable)(int enable);
	unsigned int irda_inv_rx:1;
	unsigned int irda_inv_tx:1;
	unsigned short transceiver_delay;
};

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:24 PM
Mon, Jul 25, 2016  6:19:05 PM
Mon, Jul 25, 2016  7:32:22 PM
Tue, Jul 26, 2016  2:08:34 PM
