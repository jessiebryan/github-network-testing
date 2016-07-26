#ifndef __USBAUDIO_STREAM_H
#define __USBAUDIO_STREAM_H

int snd_usb_parse_audio_interface(struct snd_usb_audio *chip,
				  int iface_no);

int snd_usb_add_audio_stream(struct snd_usb_audio *chip,
			     int stream,
			     struct audioformat *fp);

#endif /* __USBAUDIO_STREAM_H */

Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:35 PDT 2016
Sun, Jul 24, 2016  5:49:54 PM
Tue, Jul 26, 2016 12:44:49 AM
