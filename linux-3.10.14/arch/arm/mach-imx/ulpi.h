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

Tue Jul 19 12:43:47 PDT 2016
Fri Jul 22 15:56:24 PDT 2016
Sun, Jul 24, 2016  3:31:28 PM
Mon, Jul 25, 2016 10:11:25 PM
