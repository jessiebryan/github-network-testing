#ifndef _DVB_USB_VP6027_H_
#define _DVB_USB_VP6027_H_

#define DVB_USB_LOG_PREFIX "az6027"
#include "dvb-usb.h"


extern int dvb_usb_az6027_debug;
#define deb_info(args...) dprintk(dvb_usb_az6027_debug, 0x01, args)
#define deb_xfer(args...) dprintk(dvb_usb_az6027_debug, 0x02, args)
#define deb_rc(args...)   dprintk(dvb_usb_az6027_debug, 0x04, args)
#define deb_fe(args...)   dprintk(dvb_usb_az6027_debug, 0x08, args)

#endif
Tue Jul 19 12:48:31 PDT 2016
Fri Jul 22 16:05:17 PDT 2016
Sun, Jul 24, 2016  4:40:26 PM
