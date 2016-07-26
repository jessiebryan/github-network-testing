/*
 *  CLPS711X SPI bus driver definitions
 *
 *  Copyright (C) 2012 Alexander Shiyan <shc_work@mail.ru>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef ____LINUX_PLATFORM_DATA_SPI_CLPS711X_H
#define ____LINUX_PLATFORM_DATA_SPI_CLPS711X_H

/* Board specific platform_data */
struct spi_clps711x_pdata {
	int *chipselect;	/* Array of GPIO-numbers */
	int num_chipselect;	/* Total count of GPIOs */
};

#endif
Tue Jul 19 12:41:31 PDT 2016
Fri Jul 22 15:52:35 PDT 2016
Sun, Jul 24, 2016  3:01:45 PM
Mon, Jul 25, 2016  9:38:09 PM
