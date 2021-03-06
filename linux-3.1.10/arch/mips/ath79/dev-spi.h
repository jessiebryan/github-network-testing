/*
 *  Atheros AR71XX/AR724X/AR913X SPI controller device
 *
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *  Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 */

#ifndef _ATH79_DEV_SPI_H
#define _ATH79_DEV_SPI_H

#include <linux/spi/spi.h>
#include <asm/mach-ath79/ath79_spi_platform.h>

void ath79_register_spi(struct ath79_spi_platform_data *pdata,
			 struct spi_board_info const *info,
			 unsigned n);

#endif /* _ATH79_DEV_SPI_H */
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:44 PDT 2016
Sun, Jul 24, 2016  1:13:30 PM
Mon, Jul 25, 2016  6:20:25 PM
Mon, Jul 25, 2016  7:33:40 PM
Tue, Jul 26, 2016  2:09:47 PM
