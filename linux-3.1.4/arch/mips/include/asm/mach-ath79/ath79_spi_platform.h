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
Tue Jul 19 12:35:38 PDT 2016
Fri Jul 22 15:41:05 PDT 2016
Sun, Jul 24, 2016  1:38:21 PM
Mon, Jul 25, 2016  8:02:53 PM
Tue, Jul 26, 2016  2:37:23 PM
