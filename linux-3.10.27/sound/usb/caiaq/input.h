#ifndef CAIAQ_INPUT_H
#define CAIAQ_INPUT_H

void snd_usb_caiaq_input_dispatch(struct snd_usb_caiaqdev *cdev, char *buf, unsigned int len);
int snd_usb_caiaq_input_init(struct snd_usb_caiaqdev *cdev);
void snd_usb_caiaq_input_free(struct snd_usb_caiaqdev *cdev);

#endif
Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:19 PDT 2016
Sun, Jul 24, 2016  5:40:33 PM
Tue, Jul 26, 2016 12:34:34 AM
