#ifndef BCM63XX_DEV_USB_USBD_H_
#define BCM63XX_DEV_USB_USBD_H_

/*
 * usb device platform data
 */
struct bcm63xx_usbd_platform_data {
	/* board can only support full speed (USB 1.1) */
	int use_fullspeed;

	/* 0-based port index, for chips with >1 USB PHY */
	int port_no;
};

int bcm63xx_usbd_register(const struct bcm63xx_usbd_platform_data *pd);

#endif /* BCM63XX_DEV_USB_USBD_H_ */
Tue Jul 19 12:41:09 PDT 2016
Fri Jul 22 15:51:47 PDT 2016
Sun, Jul 24, 2016  2:56:20 PM
Mon, Jul 25, 2016  9:32:01 PM
