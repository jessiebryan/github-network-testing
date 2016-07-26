/*
 * orion_spi.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __LINUX_SPI_ORION_SPI_H
#define __LINUX_SPI_ORION_SPI_H

struct orion_spi_info {
	u32	tclk;		/* no <linux/clk.h> support yet */
	u32	enable_clock_fix;
};


#endif
Tue Jul 19 12:38:21 PDT 2016
Fri Jul 22 15:46:14 PDT 2016
Sun, Jul 24, 2016  2:16:23 PM
Mon, Jul 25, 2016  8:47:18 PM
