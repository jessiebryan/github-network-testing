/*
 * USB CDC Device Management userspace API definitions
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 */

#ifndef _UAPI__LINUX_USB_CDC_WDM_H
#define _UAPI__LINUX_USB_CDC_WDM_H

/*
 * This IOCTL is used to retrieve the wMaxCommand for the device,
 * defining the message limit for both reading and writing.
 *
 * For CDC WDM functions this will be the wMaxCommand field of the
 * Device Management Functional Descriptor.
 */
#define IOCTL_WDM_MAX_COMMAND _IOR('H', 0xA0, __u16)

#endif /* _UAPI__LINUX_USB_CDC_WDM_H */
Tue Jul 19 12:49:26 PDT 2016
Fri Jul 22 16:07:00 PDT 2016
Sun, Jul 24, 2016  4:53:29 PM
Mon, Jul 25, 2016 11:42:38 PM
