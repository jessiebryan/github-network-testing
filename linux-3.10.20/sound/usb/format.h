#ifndef __USBAUDIO_FORMAT_H
#define __USBAUDIO_FORMAT_H

int snd_usb_parse_audio_format(struct snd_usb_audio *chip,
			       struct audioformat *fp, unsigned int format,
			       struct uac_format_type_i_continuous_descriptor *fmt,
			       int stream, struct usb_host_interface *iface);

#endif /*  __USBAUDIO_FORMAT_H */
Tue Jul 19 12:48:10 PDT 2016
Fri Jul 22 16:04:39 PDT 2016
Sun, Jul 24, 2016  4:35:34 PM
Mon, Jul 25, 2016 11:22:39 PM
