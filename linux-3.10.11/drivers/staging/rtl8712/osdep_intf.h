/******************************************************************************
 *
 * Copyright(c) 2007 - 2010 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 * Modifications for inclusion into the Linux staging tree are
 * Copyright(c) 2010 Larry Finger. All rights reserved.
 *
 * Contact information:
 * WLAN FAE <wlanfae@realtek.com>
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 ******************************************************************************/
#ifndef __OSDEP_INTF_H_
#define __OSDEP_INTF_H_

#include "osdep_service.h"
#include "drv_types.h"

#define RND4(x)	(((x >> 2) + (((x & 3) == 0) ?  0 : 1)) << 2)

struct intf_priv {
	u8 *intf_dev;
	/* when in USB, IO is through interrupt in/out endpoints */
	struct usb_device *udev;
	struct urb *piorw_urb;
	struct semaphore io_retevt;
};

int r871x_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);

#endif	/*_OSDEP_INTF_H_*/
Tue Jul 19 12:42:11 PDT 2016
Fri Jul 22 15:53:35 PDT 2016
Sun, Jul 24, 2016  3:09:21 PM
Mon, Jul 25, 2016  9:46:42 PM
