#ifndef __USBAUDIO_ENDPOINT_H
#define __USBAUDIO_ENDPOINT_H

int snd_usb_parse_audio_endpoints(struct snd_usb_audio *chip,
				  int iface_no);

int snd_usb_add_audio_endpoint(struct snd_usb_audio *chip,
			       int stream,
			       struct audioformat *fp);

#endif /* __USBAUDIO_ENDPOINT_H */
Tue Jul 19 12:37:49 PDT 2016
Fri Jul 22 15:45:15 PDT 2016
Sun, Jul 24, 2016  2:09:05 PM
Mon, Jul 25, 2016  8:39:13 PM
