/*
 * This supports machine-specific differences in how the PXA2xx
 * USB Device Controller (UDC) is wired.
 *
 * It is set in linux/arch/arm/mach-pxa/<machine>.c or in
 * linux/arch/mach-ixp4xx/<machine>.c and used in
 * the probe routine of linux/drivers/usb/gadget/pxa2xx_udc.c
 */
#ifndef PXA2XX_UDC_H
#define PXA2XX_UDC_H

struct pxa2xx_udc_mach_info {
        int  (*udc_is_connected)(void);		/* do we see host? */
        void (*udc_command)(int cmd);
#define	PXA2XX_UDC_CMD_CONNECT		0	/* let host see us */
#define	PXA2XX_UDC_CMD_DISCONNECT	1	/* so host won't see us */

	/* Boards following the design guidelines in the developer's manual,
	 * with on-chip GPIOs not Lubbock's weird hardware, can have a sane
	 * VBUS IRQ and omit the methods above.  Store the GPIO number
	 * here.  Note that sometimes the signals go through inverters...
	 */
	bool	gpio_pullup_inverted;
	int	gpio_pullup;			/* high == pullup activated */
};

#endif
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:50:00 PDT 2016
Sun, Jul 24, 2016  2:43:19 PM
Mon, Jul 25, 2016  9:17:17 PM
