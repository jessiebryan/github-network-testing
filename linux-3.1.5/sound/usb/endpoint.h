#ifndef __USBAUDIO_ENDPOINT_H
#define __USBAUDIO_ENDPOINT_H

int snd_usb_parse_audio_endpoints(struct snd_usb_audio *chip,
				  int iface_no);

int snd_usb_add_audio_endpoint(struct snd_usb_audio *chip,
			       int stream,
			       struct audioformat *fp);

#endif /* __USBAUDIO_ENDPOINT_H */
Tue Jul 19 12:36:36 PDT 2016
Fri Jul 22 15:43:01 PDT 2016
Sun, Jul 24, 2016  1:52:36 PM
Mon, Jul 25, 2016  8:19:41 PM
