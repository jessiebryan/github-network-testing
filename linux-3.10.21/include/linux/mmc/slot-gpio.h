/*
 * Generic GPIO card-detect helper header
 *
 * Copyright (C) 2011, Guennadi Liakhovetski <g.liakhovetski@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef MMC_SLOT_GPIO_H
#define MMC_SLOT_GPIO_H

struct mmc_host;

int mmc_gpio_get_ro(struct mmc_host *host);
int mmc_gpio_request_ro(struct mmc_host *host, unsigned int gpio);
void mmc_gpio_free_ro(struct mmc_host *host);

int mmc_gpio_get_cd(struct mmc_host *host);
int mmc_gpio_request_cd(struct mmc_host *host, unsigned int gpio);
void mmc_gpio_free_cd(struct mmc_host *host);

#endif
Tue Jul 19 12:48:41 PDT 2016
Fri Jul 22 16:05:38 PDT 2016
Sun, Jul 24, 2016  4:43:00 PM
Mon, Jul 25, 2016 11:30:54 PM
