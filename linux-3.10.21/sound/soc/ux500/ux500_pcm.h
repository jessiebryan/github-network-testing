/*
 * Copyright (C) ST-Ericsson SA 2012
 *
 * Author: Ola Lilja <ola.o.lilja@stericsson.com>,
 *         Roger Nilsson <roger.xr.nilsson@stericsson.com>
 *         for ST-Ericsson.
 *
 * License terms:
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */
#ifndef UX500_PCM_H
#define UX500_PCM_H

#include <asm/page.h>

#include <linux/workqueue.h>

int ux500_pcm_register_platform(struct platform_device *pdev);
int ux500_pcm_unregister_platform(struct platform_device *pdev);

#endif
Tue Jul 19 12:48:48 PDT 2016
Fri Jul 22 16:05:51 PDT 2016
