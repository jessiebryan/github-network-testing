#ifndef __USB_OSINTF_H
#define __USB_OSINTF_H

#include "osdep_service.h"
#include "drv_types.h"
#include "usb_vendor_req.h"

#define USBD_HALTED(Status) ((u32)(Status) >> 30 == 3)

extern char *r8712_initmac;

unsigned int r8712_usb_inirp_init(struct _adapter *padapter);
unsigned int r8712_usb_inirp_deinit(struct _adapter *padapter);
uint rtl871x_hal_init(struct _adapter *padapter);
uint rtl8712_hal_deinit(struct _adapter *padapter);

void rtl871x_intf_stop(struct _adapter *padapter);
void r871x_dev_unload(struct _adapter *padapter);
void r8712_stop_drv_threads(struct _adapter *padapter);
u8 r8712_init_drv_sw(struct _adapter *padapter);
u8 r8712_free_drv_sw(struct _adapter *padapter);
struct net_device *r8712_init_netdev(void);

#endif
Tue Jul 19 12:33:35 PDT 2016
Fri Jul 22 15:38:12 PDT 2016
Sun, Jul 24, 2016  1:17:02 PM
Mon, Jul 25, 2016  6:24:38 PM
Mon, Jul 25, 2016  7:37:49 PM
Tue, Jul 26, 2016  2:13:43 PM
