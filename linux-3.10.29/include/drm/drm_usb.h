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
Tue Jul 19 12:53:50 PDT 2016
Fri Jul 22 16:15:32 PDT 2016
Sun, Jul 24, 2016  5:56:50 PM
Tue, Jul 26, 2016 12:52:31 AM
