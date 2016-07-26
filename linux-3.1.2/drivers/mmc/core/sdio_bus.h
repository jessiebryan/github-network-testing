/*
 *  linux/drivers/mmc/core/sdio_bus.h
 *
 *  Copyright 2007 Pierre Ossman
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 */
#ifndef _MMC_CORE_SDIO_BUS_H
#define _MMC_CORE_SDIO_BUS_H

struct sdio_func *sdio_alloc_func(struct mmc_card *card);
int sdio_add_func(struct sdio_func *func);
void sdio_remove_func(struct sdio_func *func);

int sdio_register_bus(void);
void sdio_unregister_bus(void);

#endif

Tue Jul 19 12:34:07 PDT 2016
Fri Jul 22 15:39:08 PDT 2016
Sun, Jul 24, 2016  1:24:15 PM
Mon, Jul 25, 2016  6:33:18 PM
Mon, Jul 25, 2016  7:46:17 PM
Tue, Jul 26, 2016  2:21:48 PM
