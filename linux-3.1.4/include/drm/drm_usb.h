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
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:39 PDT 2016
Sun, Jul 24, 2016  1:42:35 PM
Mon, Jul 25, 2016  8:07:53 PM
Tue, Jul 26, 2016  2:42:03 PM
