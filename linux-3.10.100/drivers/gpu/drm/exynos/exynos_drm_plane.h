/*
 * Copyright (C) 2011 Samsung Electronics Co.Ltd
 * Authors: Joonyoung Shim <jy0922.shim@samsung.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 *
 */

int exynos_plane_mode_set(struct drm_plane *plane, struct drm_crtc *crtc,
			  struct drm_framebuffer *fb, int crtc_x, int crtc_y,
			  unsigned int crtc_w, unsigned int crtc_h,
			  uint32_t src_x, uint32_t src_y,
			  uint32_t src_w, uint32_t src_h);
void exynos_plane_commit(struct drm_plane *plane);
void exynos_plane_dpms(struct drm_plane *plane, int mode);
struct drm_plane *exynos_plane_init(struct drm_device *dev,
				    unsigned int possible_crtcs, bool priv);
Tue Jul 19 12:39:59 PDT 2016
Fri Jul 22 15:49:31 PDT 2016
Sun, Jul 24, 2016  2:39:53 PM
Mon, Jul 25, 2016  9:13:29 PM
