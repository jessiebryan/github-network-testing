#ifndef __ASM_ARCH_CAMERA_H_
#define __ASM_ARCH_CAMERA_H_

#include <media/omap1_camera.h>

void omap1_camera_init(void *);

static inline void omap1_set_camera_info(struct omap1_cam_platform_data *info)
{
	omap1_camera_init(info);
}

#endif /* __ASM_ARCH_CAMERA_H_ */
Tue Jul 19 12:46:17 PDT 2016
Fri Jul 22 16:01:08 PDT 2016
Sun, Jul 24, 2016  4:08:29 PM
Mon, Jul 25, 2016 10:52:34 PM
