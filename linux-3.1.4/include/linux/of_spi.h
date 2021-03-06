/*
 * OpenFirmware SPI support routines
 * Copyright (C) 2008 Secret Lab Technologies Ltd.
 *
 * Support routines for deriving SPI device attachments from the device
 * tree.
 */

#ifndef __LINUX_OF_SPI_H
#define __LINUX_OF_SPI_H

#include <linux/spi/spi.h>

#if defined(CONFIG_OF_SPI) || defined(CONFIG_OF_SPI_MODULE)
extern void of_register_spi_devices(struct spi_master *master);
#else
static inline void of_register_spi_devices(struct spi_master *master)
{
	return;
}
#endif /* CONFIG_OF_SPI */

#endif /* __LINUX_OF_SPI */
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:15 PM
Mon, Jul 25, 2016  8:08:40 PM
Tue, Jul 26, 2016  2:42:48 PM
