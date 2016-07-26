#ifndef __OSDEP_INTF_H_
#define __OSDEP_INTF_H_

#include "osdep_service.h"
#include "drv_types.h"

#define RND4(x)	(((x >> 2) + (((x & 3) == 0) ?  0 : 1)) << 2)

struct intf_priv {
	u8 *intf_dev;
	/* when in USB, IO is through interrupt in/out endpoints */
	struct usb_device *udev;
	struct urb *piorw_urb;
	struct semaphore io_retevt;
};

int r871x_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);

#endif	/*_OSDEP_INTF_H_*/
Tue Jul 19 12:34:12 PDT 2016
Fri Jul 22 15:39:17 PDT 2016
Sun, Jul 24, 2016  1:25:15 PM
Mon, Jul 25, 2016  6:34:30 PM
Mon, Jul 25, 2016  7:47:28 PM
Tue, Jul 26, 2016  2:22:54 PM
