#ifndef _DVB_USB_GL861_H_
#define _DVB_USB_GL861_H_

#define DVB_USB_LOG_PREFIX "gl861"
#include "dvb-usb.h"

#define deb_rc(args...)   dprintk(dvb_usb_gl861_debug, 0x01, args)

#define GL861_WRITE		0x40
#define GL861_READ		0xc0

#define GL861_REQ_I2C_WRITE	0x01
#define GL861_REQ_I2C_READ	0x02

#endif
Tue Jul 19 12:33:29 PDT 2016
Fri Jul 22 15:38:02 PDT 2016
Sun, Jul 24, 2016  1:15:43 PM
Mon, Jul 25, 2016  6:23:04 PM
Mon, Jul 25, 2016  7:36:16 PM
Tue, Jul 26, 2016  2:12:14 PM
