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
Tue Jul 19 12:49:56 PDT 2016
Fri Jul 22 16:07:59 PDT 2016
Sun, Jul 24, 2016  5:00:55 PM
Mon, Jul 25, 2016 11:50:53 PM
