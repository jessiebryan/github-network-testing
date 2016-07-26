#ifndef __ASM_ARCH_CAMERA_H_
#define __ASM_ARCH_CAMERA_H_

#include <media/omap1_camera.h>

void omap1_camera_init(void *);

static inline void omap1_set_camera_info(struct omap1_cam_platform_data *info)
{
	omap1_camera_init(info);
}

#endif /* __ASM_ARCH_CAMERA_H_ */
Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:58 PDT 2016
Sun, Jul 24, 2016  1:44:59 PM
Mon, Jul 25, 2016  8:10:44 PM
