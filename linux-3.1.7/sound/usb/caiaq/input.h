#ifndef CAIAQ_INPUT_H
#define CAIAQ_INPUT_H

void snd_usb_caiaq_input_dispatch(struct snd_usb_caiaqdev *dev, char *buf, unsigned int len);
int snd_usb_caiaq_input_init(struct snd_usb_caiaqdev *dev);
void snd_usb_caiaq_input_free(struct snd_usb_caiaqdev *dev);

#endif
Tue Jul 19 12:37:10 PDT 2016
Fri Jul 22 15:44:07 PDT 2016
