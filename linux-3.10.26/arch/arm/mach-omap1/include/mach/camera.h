#ifndef __ASM_ARCH_CAMERA_H_
#define __ASM_ARCH_CAMERA_H_

#include <media/omap1_camera.h>

void omap1_camera_init(void *);

static inline void omap1_set_camera_info(struct omap1_cam_platform_data *info)
{
	omap1_camera_init(info);
}

#endif /* __ASM_ARCH_CAMERA_H_ */
Tue Jul 19 12:51:27 PDT 2016
Fri Jul 22 16:10:51 PDT 2016
Sun, Jul 24, 2016  5:22:34 PM
Tue, Jul 26, 2016 12:14:43 AM
