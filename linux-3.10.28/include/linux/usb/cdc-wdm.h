/*
 * USB CDC Device Management subdriver
 *
 * Copyright (c) 2012  Bjørn Mork <bjorn@mork.no>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 */

#ifndef __LINUX_USB_CDC_WDM_H
#define __LINUX_USB_CDC_WDM_H

#include <uapi/linux/usb/cdc-wdm.h>

extern struct usb_driver *usb_cdc_wdm_register(struct usb_interface *intf,
					struct usb_endpoint_descriptor *ep,
					int bufsize,
					int (*manage_power)(struct usb_interface *, int));

#endif /* __LINUX_USB_CDC_WDM_H */
Tue Jul 19 12:53:15 PDT 2016
Fri Jul 22 16:14:25 PDT 2016
Sun, Jul 24, 2016  5:48:33 PM
Tue, Jul 26, 2016 12:43:21 AM
