#ifndef __ASM_ARCH_CAMERA_H_
#define __ASM_ARCH_CAMERA_H_

#include <media/omap1_camera.h>

void omap1_camera_init(void *);

static inline void omap1_set_camera_info(struct omap1_cam_platform_data *info)
{
	omap1_camera_init(info);
}

#endif /* __ASM_ARCH_CAMERA_H_ */
Tue Jul 19 12:41:02 PDT 2016
Fri Jul 22 15:51:33 PDT 2016
Sun, Jul 24, 2016  2:54:43 PM
Mon, Jul 25, 2016  9:30:12 PM
