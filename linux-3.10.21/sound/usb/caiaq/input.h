#ifndef CAIAQ_INPUT_H
#define CAIAQ_INPUT_H

void snd_usb_caiaq_input_dispatch(struct snd_usb_caiaqdev *cdev, char *buf, unsigned int len);
int snd_usb_caiaq_input_init(struct snd_usb_caiaqdev *cdev);
void snd_usb_caiaq_input_free(struct snd_usb_caiaqdev *cdev);

#endif
Tue Jul 19 12:48:48 PDT 2016
Fri Jul 22 16:05:52 PDT 2016
Sun, Jul 24, 2016  4:44:48 PM
Mon, Jul 25, 2016 11:32:54 PM
