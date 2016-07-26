#ifndef __MACH_ULPI_H
#define __MACH_ULPI_H

#ifdef CONFIG_USB_ULPI
struct usb_phy *imx_otg_ulpi_create(unsigned int flags);
#else
static inline struct usb_phy *imx_otg_ulpi_create(unsigned int flags)
{
	return NULL;
}
#endif

extern struct usb_phy_io_ops mxc_ulpi_access_ops;

#endif /* __MACH_ULPI_H */

Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:35 PDT 2016
Sun, Jul 24, 2016  5:13:08 PM
Tue, Jul 26, 2016 12:04:17 AM
