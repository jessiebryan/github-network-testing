/*
 * Copyright 2012 Freescale Semiconductor, Inc.
 *
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

/* Used to set SoC specific callbacks */
struct usbmisc_ops {
	/* It's called once when probe a usb device */
	int (*init)(struct device *dev);
	/* It's called once after adding a usb device */
	int (*post)(struct device *dev);
};

struct usbmisc_usb_device {
	struct device *dev; /* usb controller device */
	int index;

	unsigned int disable_oc:1; /* over current detect disabled */
	unsigned int evdo:1; /* set external vbus divider option */
};

int usbmisc_set_ops(const struct usbmisc_ops *ops);
void usbmisc_unset_ops(const struct usbmisc_ops *ops);
int
usbmisc_get_init_data(struct device *dev, struct usbmisc_usb_device *usbdev);
Tue Jul 19 12:38:51 PDT 2016
Fri Jul 22 15:47:15 PDT 2016
Sun, Jul 24, 2016  2:23:34 PM
Mon, Jul 25, 2016  8:55:18 PM
