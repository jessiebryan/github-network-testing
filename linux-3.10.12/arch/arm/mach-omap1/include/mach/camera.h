#ifndef __ASM_ARCH_CAMERA_H_
#define __ASM_ARCH_CAMERA_H_

#include <media/omap1_camera.h>

void omap1_camera_init(void *);

static inline void omap1_set_camera_info(struct omap1_cam_platform_data *info)
{
	omap1_camera_init(info);
}

#endif /* __ASM_ARCH_CAMERA_H_ */
Tue Jul 19 12:42:30 PDT 2016
Fri Jul 22 15:54:04 PDT 2016
Sun, Jul 24, 2016  3:13:09 PM
Mon, Jul 25, 2016  9:51:01 PM
