#ifndef __EZUSB_H
#define __EZUSB_H

extern int ezusb_fx1_set_reset(struct usb_device *dev, unsigned char reset_bit);
extern int ezusb_fx1_ihex_firmware_download(struct usb_device *dev,
					    const char *firmware_path);

#endif /* __EZUSB_H */
Tue Jul 19 12:50:01 PDT 2016
Fri Jul 22 16:08:07 PDT 2016
Sun, Jul 24, 2016  5:01:58 PM
Mon, Jul 25, 2016 11:52:01 PM
