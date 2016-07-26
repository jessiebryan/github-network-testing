#ifndef __USBAUDIO_ENDPOINT_H
#define __USBAUDIO_ENDPOINT_H

int snd_usb_parse_audio_endpoints(struct snd_usb_audio *chip,
				  int iface_no);

int snd_usb_add_audio_endpoint(struct snd_usb_audio *chip,
			       int stream,
			       struct audioformat *fp);

#endif /* __USBAUDIO_ENDPOINT_H */
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:37 PDT 2016
Sun, Jul 24, 2016  1:27:51 PM
Mon, Jul 25, 2016  6:37:37 PM
Mon, Jul 25, 2016  7:50:31 PM
Tue, Jul 26, 2016  2:25:46 PM
