/*
 * Copyright (C) 2005 Dmitry Torokhov
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#ifndef __LINUX_USB_INPUT_H
#define __LINUX_USB_INPUT_H

#include <linux/usb.h>
#include <linux/input.h>
#include <asm/byteorder.h>

static inline void
usb_to_input_id(const struct usb_device *dev, struct input_id *id)
{
	id->bustype = BUS_USB;
	id->vendor = le16_to_cpu(dev->descriptor.idVendor);
	id->product = le16_to_cpu(dev->descriptor.idProduct);
	id->version = le16_to_cpu(dev->descriptor.bcdDevice);
}

#endif /* __LINUX_USB_INPUT_H */
Tue Jul 19 12:34:28 PDT 2016
Fri Jul 22 15:39:31 PDT 2016
Sun, Jul 24, 2016  1:27:02 PM
Mon, Jul 25, 2016  6:36:37 PM
Mon, Jul 25, 2016  7:49:33 PM
