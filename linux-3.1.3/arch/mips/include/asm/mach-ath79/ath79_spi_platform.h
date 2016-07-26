/*
 *  Platform data definition for Atheros AR71XX/AR724X/AR913X SPI controller
 *
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 */

#ifndef _ATH79_SPI_PLATFORM_H
#define _ATH79_SPI_PLATFORM_H

struct ath79_spi_platform_data {
	unsigned	bus_num;
	unsigned	num_chipselect;
};

struct ath79_spi_controller_data {
	unsigned	gpio;
};

#endif /* _ATH79_SPI_PLATFORM_H */
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:06 PM
Mon, Jul 25, 2016  6:40:17 PM
Mon, Jul 25, 2016  7:53:08 PM
Tue, Jul 26, 2016  2:28:16 PM
