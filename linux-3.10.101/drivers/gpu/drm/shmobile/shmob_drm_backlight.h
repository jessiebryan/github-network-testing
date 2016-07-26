/*
 * shmob_drm_backlight.h  --  SH Mobile DRM Backlight
 *
 * Copyright (C) 2012 Renesas Corporation
 *
 * Laurent Pinchart (laurent.pinchart@ideasonboard.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __SHMOB_DRM_BACKLIGHT_H__
#define __SHMOB_DRM_BACKLIGHT_H__

struct shmob_drm_connector;

void shmob_drm_backlight_dpms(struct shmob_drm_connector *scon, int mode);
int shmob_drm_backlight_init(struct shmob_drm_connector *scon);
void shmob_drm_backlight_exit(struct shmob_drm_connector *scon);

#endif /* __SHMOB_DRM_BACKLIGHT_H__ */
Tue Jul 19 12:40:39 PDT 2016
Fri Jul 22 15:50:48 PDT 2016
Sun, Jul 24, 2016  2:49:13 PM
Mon, Jul 25, 2016  9:24:01 PM
