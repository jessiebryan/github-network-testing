/*
 * Platform data definitions for Atmel USBA gadget driver.
 */
#ifndef __LINUX_USB_USBA_H
#define __LINUX_USB_USBA_H

struct usba_ep_data {
	char	*name;
	int	index;
	int	fifo_size;
	int	nr_banks;
	int	can_dma;
	int	can_isoc;
};

struct usba_platform_data {
	int			vbus_pin;
	int			vbus_pin_inverted;
	int			num_ep;
	struct usba_ep_data	ep[0];
};

#endif /* __LINUX_USB_USBA_H */
Tue Jul 19 12:43:01 PDT 2016
Fri Jul 22 15:54:59 PDT 2016
Sun, Jul 24, 2016  3:20:26 PM
Mon, Jul 25, 2016  9:59:09 PM
