/*
 * shmob_drm_plane.h  --  SH Mobile DRM Planes
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

#ifndef __SHMOB_DRM_PLANE_H__
#define __SHMOB_DRM_PLANE_H__

struct shmob_drm_device;

int shmob_drm_plane_create(struct shmob_drm_device *sdev, unsigned int index);
void shmob_drm_plane_setup(struct drm_plane *plane);

#endif /* __SHMOB_DRM_PLANE_H__ */
Tue Jul 19 12:49:45 PDT 2016
Fri Jul 22 16:07:39 PDT 2016
Sun, Jul 24, 2016  4:58:22 PM
Mon, Jul 25, 2016 11:48:05 PM
