/*
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd.
 * Authors:
 *	Inki Dae <inki.dae@samsung.com>
 *	Seung-Woo Kim <sw0312.kim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef _EXYNOS_HDMI_H_
#define _EXYNOS_HDMI_H_

void hdmi_attach_ddc_client(struct i2c_client *ddc);
void hdmi_attach_hdmiphy_client(struct i2c_client *hdmiphy);

extern struct i2c_driver hdmiphy_driver;
extern struct i2c_driver ddc_driver;

#endif
Tue Jul 19 12:47:50 PDT 2016
Fri Jul 22 16:04:01 PDT 2016
Sun, Jul 24, 2016  4:30:32 PM
Mon, Jul 25, 2016 11:17:05 PM
