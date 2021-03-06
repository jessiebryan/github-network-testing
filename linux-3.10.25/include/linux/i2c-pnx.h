/*
 * Header file for I2C support on PNX010x/4008.
 *
 * Author: Dennis Kovalev <dkovalev@ru.mvista.com>
 *
 * 2004-2006 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */

#ifndef __I2C_PNX_H__
#define __I2C_PNX_H__

struct platform_device;
struct clk;

struct i2c_pnx_mif {
	int			ret;		/* Return value */
	int			mode;		/* Interface mode */
	struct completion	complete;	/* I/O completion */
	struct timer_list	timer;		/* Timeout */
	u8 *			buf;		/* Data buffer */
	int			len;		/* Length of data buffer */
	int			order;		/* RX Bytes to order via TX */
};

struct i2c_pnx_algo_data {
	void __iomem		*ioaddr;
	struct i2c_pnx_mif	mif;
	int			last;
	struct clk		*clk;
	struct i2c_adapter	adapter;
	phys_addr_t		base;
	int			irq;
	u32			timeout;
};

#endif /* __I2C_PNX_H__ */
Tue Jul 19 12:51:16 PDT 2016
Fri Jul 22 16:10:30 PDT 2016
Sun, Jul 24, 2016  5:19:52 PM
Tue, Jul 26, 2016 12:11:45 AM
