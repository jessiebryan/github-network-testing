#ifndef __LINUX_USB_NOP_XCEIV_H
#define __LINUX_USB_NOP_XCEIV_H

#include <linux/usb/otg.h>

struct nop_usb_xceiv_platform_data {
	enum usb_phy_type type;
	unsigned long clk_rate;

	/* if set fails with -EPROBE_DEFER if can't get regulator */
	unsigned int needs_vcc:1;
	unsigned int needs_reset:1;
};

#if defined(CONFIG_NOP_USB_XCEIV) || (defined(CONFIG_NOP_USB_XCEIV_MODULE) && defined(MODULE))
/* sometimes transceivers are accessed only through e.g. ULPI */
extern void usb_nop_xceiv_register(void);
extern void usb_nop_xceiv_unregister(void);
#else
static inline void usb_nop_xceiv_register(void)
{
}

static inline void usb_nop_xceiv_unregister(void)
{
}
#endif

#endif /* __LINUX_USB_NOP_XCEIV_H */
Tue Jul 19 12:42:22 PDT 2016
Fri Jul 22 15:53:49 PDT 2016
Sun, Jul 24, 2016  3:11:15 PM
Mon, Jul 25, 2016  9:48:51 PM
