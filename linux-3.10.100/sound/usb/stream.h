#ifndef __USBAUDIO_STREAM_H
#define __USBAUDIO_STREAM_H

int snd_usb_parse_audio_interface(struct snd_usb_audio *chip,
				  int iface_no);

int snd_usb_add_audio_stream(struct snd_usb_audio *chip,
			     int stream,
			     struct audioformat *fp);

#endif /* __USBAUDIO_STREAM_H */

Tue Jul 19 12:40:20 PDT 2016
Fri Jul 22 15:50:12 PDT 2016
Sun, Jul 24, 2016  2:44:54 PM
Mon, Jul 25, 2016  9:19:05 PM
