#ifndef __USBAUDIO_STREAM_H
#define __USBAUDIO_STREAM_H

int snd_usb_parse_audio_interface(struct snd_usb_audio *chip,
				  int iface_no);

int snd_usb_add_audio_stream(struct snd_usb_audio *chip,
			     int stream,
			     struct audioformat *fp);

#endif /* __USBAUDIO_STREAM_H */

Tue Jul 19 12:41:39 PDT 2016
Fri Jul 22 15:52:47 PDT 2016
Sun, Jul 24, 2016  3:03:20 PM
Mon, Jul 25, 2016  9:39:56 PM
