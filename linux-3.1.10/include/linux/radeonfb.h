#ifndef __LINUX_RADEONFB_H__
#define __LINUX_RADEONFB_H__

#include <asm/ioctl.h>
#include <linux/types.h>

#define ATY_RADEON_LCD_ON	0x00000001
#define ATY_RADEON_CRT_ON	0x00000002


#define FBIO_RADEON_GET_MIRROR	_IOR('@', 3, size_t)
#define FBIO_RADEON_SET_MIRROR	_IOW('@', 4, size_t)

#endif

Tue Jul 19 12:33:41 PDT 2016
Fri Jul 22 15:38:24 PDT 2016
Sun, Jul 24, 2016  1:18:34 PM
Mon, Jul 25, 2016  6:26:28 PM
Mon, Jul 25, 2016  7:39:37 PM
