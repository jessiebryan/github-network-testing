#ifndef __ASM_ARCH_CAMERA_H_
#define __ASM_ARCH_CAMERA_H_

#include <media/omap1_camera.h>

void omap1_camera_init(void *);

static inline void omap1_set_camera_info(struct omap1_cam_platform_data *info)
{
	omap1_camera_init(info);
}

#endif /* __ASM_ARCH_CAMERA_H_ */
Tue Jul 19 12:52:44 PDT 2016
Fri Jul 22 16:13:25 PDT 2016
Sun, Jul 24, 2016  5:41:11 PM
Tue, Jul 26, 2016 12:35:15 AM
