#ifndef __MACH_ULPI_H
#define __MACH_ULPI_H

#ifdef CONFIG_USB_ULPI
struct otg_transceiver *imx_otg_ulpi_create(unsigned int flags);
#else
static inline struct otg_transceiver *imx_otg_ulpi_create(unsigned int flags)
{
	return NULL;
}
#endif

extern struct otg_io_access_ops mxc_ulpi_access_ops;

#endif /* __MACH_ULPI_H */

Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:02 PDT 2016
Sun, Jul 24, 2016  1:45:25 PM
Mon, Jul 25, 2016  8:11:15 PM
