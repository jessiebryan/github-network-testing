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
Tue Jul 19 12:36:54 PDT 2016
Fri Jul 22 15:43:36 PDT 2016
Sun, Jul 24, 2016  1:56:58 PM
Mon, Jul 25, 2016  8:24:53 PM
