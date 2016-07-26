#ifndef _DRM_SYSFS_H_
#define _DRM_SYSFS_H_

/**
 * This minimalistic include file is intended for users (read TTM) that
 * don't want to include the full drmP.h file.
 */

extern int drm_class_device_register(struct device *dev);
extern void drm_class_device_unregister(struct device *dev);

#endif
Tue Jul 19 12:52:32 PDT 2016
Fri Jul 22 16:13:00 PDT 2016
Sun, Jul 24, 2016  5:38:12 PM
Tue, Jul 26, 2016 12:31:57 AM
