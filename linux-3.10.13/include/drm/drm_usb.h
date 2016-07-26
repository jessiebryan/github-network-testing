#ifndef DRM_USB_H
#define DRM_USB_H

#include <drmP.h>

#include <linux/usb.h>

extern int drm_usb_init(struct drm_driver *driver, struct usb_driver *udriver);
extern void drm_usb_exit(struct drm_driver *driver, struct usb_driver *udriver);

int drm_get_usb_dev(struct usb_interface *interface,
		    const struct usb_device_id *id,
		    struct drm_driver *driver);

#endif
Tue Jul 19 12:43:35 PDT 2016
Fri Jul 22 15:56:03 PDT 2016
Sun, Jul 24, 2016  3:28:37 PM
Mon, Jul 25, 2016 10:08:14 PM
