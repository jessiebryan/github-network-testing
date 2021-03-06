#ifndef _DRM_SYSFS_H_
#define _DRM_SYSFS_H_

/**
 * This minimalistic include file is intended for users (read TTM) that
 * don't want to include the full drmP.h file.
 */

extern int drm_class_device_register(struct device *dev);
extern void drm_class_device_unregister(struct device *dev);

#endif
Tue Jul 19 12:46:44 PDT 2016
Fri Jul 22 16:01:59 PDT 2016
Sun, Jul 24, 2016  4:14:45 PM
Mon, Jul 25, 2016 10:59:32 PM
