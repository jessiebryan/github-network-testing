/*
 * Copyright (c) 2013, NVIDIA Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HOST1X_CLIENT_H
#define HOST1X_CLIENT_H

struct device;
struct platform_device;

#ifdef CONFIG_DRM_TEGRA
int host1x_drm_alloc(struct platform_device *pdev);
#else
static inline int host1x_drm_alloc(struct platform_device *pdev)
{
	return 0;
}
#endif

void host1x_set_drm_data(struct device *dev, void *data);
void *host1x_get_drm_data(struct device *dev);

#endif
Tue Jul 19 12:48:28 PDT 2016
Fri Jul 22 16:05:14 PDT 2016
Sun, Jul 24, 2016  4:39:56 PM
Mon, Jul 25, 2016 11:27:30 PM
