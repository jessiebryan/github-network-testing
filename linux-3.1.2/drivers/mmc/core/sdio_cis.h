/*
 * linux/drivers/mmc/core/sdio_cis.h
 *
 * Author:	Nicolas Pitre
 * Created:	June 11, 2007
 * Copyright:	MontaVista Software Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 */

#ifndef _MMC_SDIO_CIS_H
#define _MMC_SDIO_CIS_H

int sdio_read_common_cis(struct mmc_card *card);
void sdio_free_common_cis(struct mmc_card *card);

int sdio_read_func_cis(struct sdio_func *func);
void sdio_free_func_cis(struct sdio_func *func);

#endif
Tue Jul 19 12:34:07 PDT 2016
Fri Jul 22 15:39:08 PDT 2016
Sun, Jul 24, 2016  1:24:15 PM
Mon, Jul 25, 2016  6:33:18 PM
Mon, Jul 25, 2016  7:46:17 PM
Tue, Jul 26, 2016  2:21:48 PM
