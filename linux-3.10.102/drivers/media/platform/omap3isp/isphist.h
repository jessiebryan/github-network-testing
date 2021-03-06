/*
 * isphist.h
 *
 * TI OMAP3 ISP - Histogram module
 *
 * Copyright (C) 2010 Nokia Corporation
 * Copyright (C) 2009 Texas Instruments, Inc.
 *
 * Contacts: David Cohen <dacohen@gmail.com>
 *	     Laurent Pinchart <laurent.pinchart@ideasonboard.com>
 *	     Sakari Ailus <sakari.ailus@iki.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef OMAP3_ISP_HIST_H
#define OMAP3_ISP_HIST_H

#include <linux/omap3isp.h>

#define ISPHIST_IN_BIT_WIDTH_CCDC	10

struct isp_device;

int omap3isp_hist_init(struct isp_device *isp);
void omap3isp_hist_cleanup(struct isp_device *isp);

#endif /* OMAP3_ISP_HIST */
Tue Jul 19 12:41:19 PDT 2016
Fri Jul 22 15:52:11 PDT 2016
Sun, Jul 24, 2016  2:58:53 PM
Mon, Jul 25, 2016  9:34:57 PM
