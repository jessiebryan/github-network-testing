#ifndef __EZUSB_H
#define __EZUSB_H

extern int ezusb_fx1_set_reset(struct usb_device *dev, unsigned char reset_bit);
extern int ezusb_fx1_ihex_firmware_download(struct usb_device *dev,
					    const char *firmware_path);

#endif /* __EZUSB_H */
Tue Jul 19 12:46:49 PDT 2016
Fri Jul 22 16:02:06 PDT 2016
Sun, Jul 24, 2016  4:15:46 PM
Mon, Jul 25, 2016 11:00:41 PM
