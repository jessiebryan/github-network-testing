#ifndef __LINUX_RADEONFB_H__
#define __LINUX_RADEONFB_H__

#include <asm/ioctl.h>
#include <linux/types.h>

#define ATY_RADEON_LCD_ON	0x00000001
#define ATY_RADEON_CRT_ON	0x00000002


#define FBIO_RADEON_GET_MIRROR	_IOR('@', 3, size_t)
#define FBIO_RADEON_SET_MIRROR	_IOW('@', 4, size_t)

#endif

Tue Jul 19 12:43:04 PDT 2016
Fri Jul 22 15:55:05 PDT 2016
Sun, Jul 24, 2016  3:21:10 PM
Mon, Jul 25, 2016  9:59:58 PM
