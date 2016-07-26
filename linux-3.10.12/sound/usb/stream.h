#ifndef __USBAUDIO_STREAM_H
#define __USBAUDIO_STREAM_H

int snd_usb_parse_audio_interface(struct snd_usb_audio *chip,
				  int iface_no);

int snd_usb_add_audio_stream(struct snd_usb_audio *chip,
			     int stream,
			     struct audioformat *fp);

#endif /* __USBAUDIO_STREAM_H */

Tue Jul 19 12:43:06 PDT 2016
Fri Jul 22 15:55:09 PDT 2016
Sun, Jul 24, 2016  3:21:45 PM
Mon, Jul 25, 2016 10:00:37 PM
