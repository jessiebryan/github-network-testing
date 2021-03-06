/*
 * arch/arm/mach-u300/spi.h
 *
 * Copyright (C) 2009 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 *
 * Author: Linus Walleij <linus.walleij@stericsson.com>
 */
#ifndef SPI_H
#define SPI_H
#include <linux/amba/bus.h>

#ifdef CONFIG_SPI_PL022
void __init u300_spi_init(struct amba_device *adev);
void __init u300_spi_register_board_devices(void);
#else
/* Compile out SPI support if PL022 is not selected */
static inline void __init u300_spi_init(struct amba_device *adev)
{
}
static inline void __init u300_spi_register_board_devices(void)
{
}
#endif

#endif
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:49 PM
Mon, Jul 25, 2016  6:38:45 PM
Mon, Jul 25, 2016  7:51:38 PM
Tue, Jul 26, 2016  2:26:50 PM
