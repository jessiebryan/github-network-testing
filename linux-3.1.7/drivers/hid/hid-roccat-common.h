#ifndef __HID_ROCCAT_COMMON_H
#define __HID_ROCCAT_COMMON_H

/*
 * Copyright (c) 2011 Stefan Achatz <erazor_de@users.sourceforge.net>
 */

/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 */

#include <linux/usb.h>
#include <linux/types.h>

int roccat_common_receive(struct usb_device *usb_dev, uint report_id,
		void *data, uint size);
int roccat_common_send(struct usb_device *usb_dev, uint report_id,
		void const *data, uint size);

#endif
Tue Jul 19 12:36:53 PDT 2016
Fri Jul 22 15:43:34 PDT 2016
Sun, Jul 24, 2016  1:56:45 PM
Mon, Jul 25, 2016  8:24:36 PM
