#ifndef __EZUSB_H
#define __EZUSB_H

extern int ezusb_fx1_set_reset(struct usb_device *dev, unsigned char reset_bit);
extern int ezusb_fx1_ihex_firmware_download(struct usb_device *dev,
					    const char *firmware_path);

#endif /* __EZUSB_H */
Tue Jul 19 12:45:33 PDT 2016
Fri Jul 22 15:59:44 PDT 2016
Sun, Jul 24, 2016  3:57:21 PM
Mon, Jul 25, 2016 10:40:10 PM
