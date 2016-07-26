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
Tue Jul 19 12:35:25 PDT 2016
Fri Jul 22 15:40:39 PDT 2016
Sun, Jul 24, 2016  1:35:16 PM
Mon, Jul 25, 2016  7:59:15 PM
Tue, Jul 26, 2016  2:33:58 PM
