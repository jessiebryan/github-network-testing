#ifndef CAIAQ_MIDI_H
#define CAIAQ_MIDI_H

int snd_usb_caiaq_midi_init(struct snd_usb_caiaqdev *dev);
void snd_usb_caiaq_midi_handle_input(struct snd_usb_caiaqdev *dev, int port, const char *buf, int len);
void snd_usb_caiaq_midi_output_done(struct urb *urb);

#endif /* CAIAQ_MIDI_H */
Tue Jul 19 12:37:49 PDT 2016
Fri Jul 22 15:45:15 PDT 2016
Sun, Jul 24, 2016  2:09:05 PM
Mon, Jul 25, 2016  8:39:13 PM
