#ifndef __USB3503_H__
#define __USB3503_H__

#define USB3503_I2C_NAME	"usb3503"

enum usb3503_mode {
	USB3503_MODE_UNKNOWN,
	USB3503_MODE_HUB,
	USB3503_MODE_STANDBY,
};

struct usb3503_platform_data {
	enum usb3503_mode	initial_mode;
	int	gpio_intn;
	int	gpio_connect;
	int	gpio_reset;
};

#endif
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:40 PDT 2016
Sun, Jul 24, 2016  4:43:14 PM
Mon, Jul 25, 2016 11:31:10 PM
